# 萤火突击 DumpSDK · Lost Light

《萤火突击》Android ARM64 **1.0.580**（`com.netease.yhtj`）的非官方 Messiah 引擎类型 SDK。可以按名称查类、继承、字段、属性、事件、枚举值和方法声明，也可以把这些元数据作为 C/C++ 静态库链接到本地工具。

[浏览 87 个分包](dump/packages/README.md) · [查看全部字段的命名来源](data/field-names.tsv) · [查看反射类型的命名来源](data/reflected-type-names.tsv) · [下载源码 ZIP](https://github.com/cos30lll/LostLight-DumpSDK/archive/refs/heads/main.zip)

## SDK 里的名字从哪里来(完全由中转站https://ecmod.zhake.win) 许愿生成的数据

| 你看到的名字 | 来源与读法 |
| --- | --- |
| C++ 类型及命名空间 | 从目标 ELF 的 Itanium C++ RTTI（运行时类型信息）读取编码名，再反修饰为可读名，例如 `Messiah::IEntity`。目录保留原编码名，同名的不同 RTTI 记录仍可区分。 |
| 反射类型名和别名 | 引擎注册表保存命名空间和名称，例如 `Messiah.IEntity`。在 928 项反射注册中，367 项使用关联 RTTI 确定限定名，561 项按反射命名空间和别名组成限定名。|
| 字段 | **4,233 条**标为 `native_reflection`，名字来自反射描述符。**46 条**标为 `accessor_derived`，名字由访问器名称或行为推导。每条观察都能在字段索引中按所属类型和字段名查到。 |
| 方法 | 原生反射方法的名字取自具名描述符，参数、返回值和限定符结合绑定模板 RTTI 恢复。另有 244 条仅签名方法，名字见编译器保留的成员模板参数。 |
| 枚举、属性、事件 | 显示名取自对应的引擎注册记录。枚举项另有取值证据。事件名称和参数类型分别取证，参数数量本身不足以证明指针或引用限定符。 |
| Python 绑定名 | 43 个模块的 1,443 个包装入口来自冻结的 CPython 方法注册记录。它们在元数据的 `methods` 数组里单独列出，与 C++ 具名方法分开计数。 |
| 工具生成的标签 | `t_…` 是目录标识。`Full Name+` 延续上一行完整类型名。事件存储后缀和按序号显示的参数方便阅读，原始源码中的变量名仍可能未知。 |

以 `Messiah::IEntity` 为例，反射表保留了 `Transform`，也保留了 `ReplaceVisiable` 的原始拼写。`Position` 是根据访问器推导出的名字，其存储范围落在 `Transform` 内部。因此在统计独立成员或还原类布局时，不能把这两条观察算成两块独立存储。[字段来源索引](data/field-names.tsv)

## 已恢复到什么程度

| 数据 | 这个构建中的结果 | 仍然未知的部分 |
| --- | ---: | --- |
| 类型与别名 | 17,032 个阅读条目，含 16,466 条 RTTI 记录、16,464 个不同 RTTI 显示名 | 16,085 个条目只有 RTTI 证据。整个目录中有 16,104 项缺少已知大小。 |
| 反射注册 | 928 项已识别、已导出 | 其中 292 项尚无已恢复成员，无法据此判断原类为空。 |
| 继承与虚表 | 13,111 条基类关系，含 77 条虚基关系。13,149 组虚表共观察到 140,469 个连续本地代码槽 | 表尾、外部代码槽、匿名槽位的名字和签名可能未知。 |
| 具名方法 | 1,248 项有关联入口或虚槽，另有 244 项仅有签名 | 后 244 项的独立成员入口尚未确认。 |
| 字段、属性与枚举 | 4,279 条字段观察、708 项属性、738 个枚举值 | 394 项属性的写入路径或副作用尚未完全确认。字段可能重叠，私有成员和完整对象布局仍有缺口。 |
| 事件 | 203 项中有 172 项具备强签名证据 | 31 项的完整签名仍待确认。 |

原程序的全部类型和成员总数未知，无法据此计算整个游戏的恢复率。本次验证覆盖离线导出和本机编译。游戏内运行标记为 `NOT RUN`，其他版本需要单独核对。[机器可读统计及输入指纹](data/coverage.json)

## 查阅与构建

直接从[分包目录](dump/packages/README.md)选命名空间。需要跨包搜索时，可以下载仓库后打开总表，或用 `rg` 查询。相同声明同时收录在总表和分包中。

```sh
rg -n -F "Full Name: Messiah::IEntity" dump/dump.h
rg "accessor_derived" data/field-names.tsv
```

在 64 位主机上使用 CMake、GCC/G++ 或 Clang/Clang++（C11、C++17）。以 Linux 的单配置 CMake 构建为例，以下命令生成静态库，并从冻结数据导出 `out/metadata.json`。这一流程只需要仓库源码。

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 2
./build/exporter/messiah_offline_export out
```

作为 CMake 子项目接入时，用 `add_subdirectory` 加入本仓库，再链接 `lostlight_dumpsdk`。C++ 入口为 `sdk.hpp`。C 调用者可分别包含 `native_catalog.h` 和 `native_recovered.h`，通过 `msdk_native_fields[i].name_status` 读取字段命名来源。下面的示例打印指定类型的字段名、来源与类型。[示例源码](examples/field_names.cpp)

```sh
c++ -std=c++17 -Isdk examples/field_names.cpp build/liblostlight_dumpsdk.a -o build/field_names
./build/field_names 'Messiah::IEntity'
```

拥有匹配的原始 ELF 时，还可以独立重扫 RTTI、继承和虚表前缀。扫描器首先校验输入的 SHA-256。[离线扫描器](scanner/README.md)

## 数据版本与许可

数据取自单一 Android ARM64 构建的静态分析交接快照。ELF Build ID 为 `ac027ff823a6f358af1a7c5ddf123946069cd23e`，SHA-256 为 `59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65`。公开版发布类型声明、元数据、离线扫描器和导出器。原交接包中的 Android 注入模块、运行时对象读取、属性写入分析材料及预编译产物均未随仓库分发。

项目原创工具代码采用 MIT 许可证。游戏及引擎名称、标识符和派生数据的来源与权利范围另行标明。[MIT 许可证](LICENSE) · [数据来源及第三方说明](NOTICE.md)
