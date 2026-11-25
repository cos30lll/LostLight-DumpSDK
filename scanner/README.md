# 从本地 ELF 重新扫描 RTTI

`recover_types.py` 可以从《萤火突击》1.0.580 的 Android ARM64 ELF 中读取 Itanium C++ RTTI、基类关系和虚表前缀。脚本改编自原项目的 `tools/recover_type_universe.py` 和 `tools/recover_native_sdk.py`。原始 ELF 需要自行提供。

## 运行

需要 Python 3.8 或更高版本，并确保能在 `PATH` 中找到 GNU binutils 的 `c++filt`。在仓库根目录运行下面的命令，将 `/path/to/libGame.so` 换成本地 ELF 路径。最后一个参数是输出文件。

```sh
python scanner/recover_types.py /path/to/libGame.so build/type-scan.json
```

脚本先计算完整文件的 SHA-256。只有结果与 `59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65` 相符，才会继续解析 ELF 重定位和类型记录。其他构建会报哈希不符并退出。

## 如何读输出

- `rtti` 记录编码名 `mangled`、可读名 `name`、RTTI 类别和直接基类。虚基类记录中的 `offset_kind=vtable_offset_entry` 表示偏移指向虚表里的基类偏移项。
- `vtables` 记录关联的 RTTI、虚表地址点，以及从该点起连续指向本地代码的槽位。遇到空值、非本地代码、未映射位置或扫描上限时停止，原因记在 `termination`。完整表尾和匿名槽位的方法签名仍可能未知。
- `counts` 汇总扫描得到的类型、基类关系和槽位数。原有数据可供对照，其中有 16,466 条 RTTI 记录、13,111 条基类关系、13,149 组虚表和 140,469 个槽位。字段、反射属性、事件和枚举值收录在静态 SDK 中。[SDK 说明](../README.md)

Windows x64 上已测过命令行、输入哈希校验、合成 ELF 样例，以及全部 16,466 个已知编码名的解码。原归档未附游戏 ELF，因此上述测试未用原始游戏文件重扫。
