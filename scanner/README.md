# 从本地 ELF 重新扫描 RTTI

`recover_types.py` 从一个固定版本的《萤火突击》Android ARM64 ELF 文件中读取 Itanium C++ RTTI、基类关系和虚表前缀。脚本改编自原项目的 `tools/recover_type_universe.py` 和 `tools/recover_native_sdk.py`。输入文件由使用者提供。

## 运行

需要 Python 3.8 或更高版本，并在 PATH 中提供 GNU binutils 的 `c++filt`。在仓库根目录运行以下命令，将 `/path/to/libGame.so` 替换为本地 ELF 路径，最后一个参数指定输出文件。

```sh
python scanner/recover_types.py /path/to/libGame.so build/type-scan.json
```

输入文件须匹配 SHA-256 `59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65`。脚本先校验完整文件，再解析 ELF 重定位和类型记录。遇到其他构建时会报告哈希不符并退出。

## 输出与覆盖范围

- `rtti` 保存修饰名 `mangled`、解码显示名 `name`、RTTI 类别和直接基类。虚基类的 `offset_kind=vtable_offset_entry` 表示偏移量指向虚表中的基类偏移项。
- `vtables` 保存关联的 RTTI 记录、虚表地址点和从地址点起的连续本地代码槽。遇到空值、非本地代码、未映射位置或扫描上限时停止，`termination` 记录原因。完整虚表边界和匿名槽的方法签名仍可能未知。
- `counts` 汇总此次扫描得到的类型、继承关系和槽位数量。包中历史快照的对照值为 16,466 条 RTTI 记录、13,111 条基类关系、13,149 组虚表和 140,469 个槽位。字段、反射属性、事件和枚举值请查阅仓库中的静态 SDK。

本次发布在 Windows x64 上验证了命令行、输入哈希校验、合成 ELF 样例及全部 16,466 个已知修饰名的解码。原始游戏 ELF 未随交接包提供，本次未使用它重跑扫描。
