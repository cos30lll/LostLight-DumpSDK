# 萤火突击 DumpSDK · Lost Light

《萤火突击》Android ARM64 版的非官方 Messiah 引擎类型 SDK，数据取自 **1.0.580**（`com.netease.yhtj`）。想查一个类有哪些基类、字段或方法，可以直接看声明。需要在自己的工具里查询字段、属性、事件和枚举值时，也可以链接仓库里的 C/C++ 静态库。

这份 SDK 的数据全部通过 [ECAPI 中转站](https://ecmod.zhake.win)的许愿编程生成。

[浏览 87 个分包](dump/packages/README.md) · [字段名索引](data/field-names.tsv) · [反射类型名索引](data/reflected-type-names.tsv) · [下载源码 ZIP](https://github.com/cos30lll/LostLight-DumpSDK/archive/refs/heads/main.zip)

## 名字从哪里来

以 `Messiah::IEntity` 为例，反射表直接给出了 `Transform`，也保留了 `ReplaceVisiable` 这个拼写。`Position` 则是从访问器推出来的，它占用的范围落在 `Transform` 内。还原类布局时，如果把这两项的大小相加，就会重复计算。[字段名索引](data/field-names.tsv)

| 名称 | 从哪里来 |
| --- | --- |
| C++ 类型和命名空间 | 读取 ELF 中的 Itanium C++ RTTI（运行时类型信息），再把编码名还原为 `Messiah::IEntity` 这样的可读名。目录同时保留原编码名，显示名相同的 RTTI 记录仍可区分。 |
| 反射类型名和别名 | 引擎注册表保留了命名空间和名称，例如 `Messiah.IEntity`。928 项注册中，367 项的限定名由关联 RTTI 确定，561 项由反射命名空间和别名组成。 |
| 字段 | 4,233 条标为 `native_reflection`，名字来自反射描述符。46 条标为 `accessor_derived`，名字根据访问器的名称或行为推断。字段索引可按所属类型和字段名查到每条记录。 |
| 方法 | 反射描述符给出方法名，绑定模板的 RTTI 用于还原参数、返回值和限定符。另有 244 项只恢复了签名，名字来自编译器保留的成员模板参数。 |
| 枚举、属性和事件 | 名字来自引擎的相应注册记录，枚举项的取值另有记录可查。事件名与参数类型分开核对，单凭参数个数无法判定指针或引用限定符。 |
| Python 绑定 | 保存的 CPython 方法注册记录给出了 43 个模块的 1,443 个包装入口。它们单列在元数据的 `methods` 数组中，与 C++ 具名方法分开计数。 |
| 阅读标记 | `t_…` 是目录标识，`Full Name+` 表示上一行完整类型名的续行。事件存储后缀和参数序号由工具添加，原源码中的变量名有些仍未知。 |

## 已恢复的数据和缺口

| 数据 | 已整理的内容 | 已知缺口 |
| --- | --- | --- |
| 类型与别名 | 目录有 17,032 项，含 16,466 条 RTTI 记录，对应 16,464 个不同的 RTTI 显示名。 | 16,085 项只有 RTTI 记录，整个目录中有 16,104 项大小未知。 |
| 反射注册 | 已识别并导出 928 项。 | 292 项尚未恢复出成员，对应的原类是否为空仍未知。 |
| 继承与虚表 | 13,111 条基类关系，其中 77 条属于虚继承。13,149 组虚表中共读到 140,469 个连续本地代码槽。 | 表尾、外部代码槽，以及匿名槽位的方法名和签名仍可能未知。 |
| 具名方法 | 1,248 项已关联到方法入口或虚槽，另有 244 项只恢复了签名。 | 后 244 项的独立成员入口仍待确认。 |
| 字段、属性与枚举 | 4,279 条字段观察、708 项属性、738 个枚举值。 | 394 项属性的写入路径或副作用仍未完全确认。字段可能重叠，部分私有成员和对象布局仍未知。 |
| 事件 | 203 项事件中，172 项有较强证据支持其签名。 | 31 项的完整签名仍待确认。 |

原程序一共有多少类型和成员仍未知，因而算不出整体恢复率。已有记录覆盖离线导出和本机编译，游戏内运行状态为 `NOT RUN`。这些数字只对应 1.0.580，其他版本需要单独核对。[详细统计与输入文件指纹](data/coverage.json)

## 查阅与构建

按命名空间浏览时，从分包目录进入。跨包查找时，用 `rg` 搜索总表 `dump/dump.h` 即可，它和分包收录的是同一批声明。下面两条命令分别查找一个类型，以及通过访问器推断的字段。[分包目录](dump/packages/README.md)

```sh
rg -n -F "Full Name: Messiah::IEntity" dump/dump.h
rg "accessor_derived" data/field-names.tsv
```

构建需要 64 位主机、CMake 和支持 C11、C++17 的 GCC/G++ 或 Clang/Clang++。在 Linux 上，用单配置 CMake 执行下面三条命令即可生成静态库，并从仓库自带的数据导出 `out/metadata.json`。

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 2
./build/exporter/messiah_offline_export out
```

在其他 CMake 项目中，用 `add_subdirectory` 加入此仓库，再链接 `lostlight_dumpsdk`。C++ 入口为 `sdk.hpp`。C 调用者可分别包含 `native_catalog.h` 和 `native_recovered.h`，通过 `msdk_native_fields[i].name_status` 查询字段名的来源。以下示例打印指定类型的字段名、命名来源和字段类型。[示例源码](examples/field_names.cpp)

```sh
c++ -std=c++17 -Isdk examples/field_names.cpp build/liblostlight_dumpsdk.a -o build/field_names
./build/field_names 'Messiah::IEntity'
```

如果手头有匹配的原始 ELF，离线扫描器可以核对文件的 SHA-256，再重新读取 RTTI、基类关系和虚表前缀。[扫描器用法](scanner/README.md)

## 数据版本与许可

类型数据来自同一份 Android ARM64 构建。原始 ELF 的 Build ID 为 `ac027ff823a6f358af1a7c5ddf123946069cd23e`，SHA-256 为 `59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65`。

仓库收录了类型声明、元数据、离线扫描器和导出器。原归档里的 Android 注入模块、运行时对象读取、属性写入分析材料和预编译产物都未收录。原创工具代码按 MIT 许可提供。游戏与引擎的名称、标识符及派生数据的权利范围见来源说明。[MIT 许可证](LICENSE) · [数据来源与第三方说明](NOTICE.md)
