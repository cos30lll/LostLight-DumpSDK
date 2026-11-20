# 数据来源与许可范围

发布基线为 `MessiahNativeSDK-github-handoff.zip` 中的 `analysis/completion-work/`。交接快照的 SHA-256 为 `67f192635a3863c18e05eed4140cac9812245bfa8bf4db23d894066f4e93ecb4`。源数据记录的目标为网易《萤火突击》1.0.580 Android ARM64 版的 `libGame.so`。原游戏二进制、素材和官方源码未随仓库分发。

| 公开内容 | 交接快照中的来源 |
| --- | --- |
| `sdk/` | `generated/sdk/` 中的目录、成员表、C/C++ 声明及部分布局。公开构建移除了运行时依赖。 |
| `dump/` | `generated/dump.h` 的声明阅读视图。保留确切类型名、反射别名、字段命名证据、相对布局和具名签名。公开阅读版用本地编号标记 RTTI 引用，按包提供同一批声明。 |
| `data/field-names.tsv`、`data/reflected-type-names.tsv` | `native-recovered-candidate.json` 的字段和反射类型记录。字段来源与主 Dump 的逐项标注交叉核对。 |
| `data/coverage.json` | `completion-checkpoint.json`、`type-universe-validation.json` 与对应快照的实际条目。已保留三份输入数据的 SHA-256。 |
| `exporter/` | 同一基线的 `native-source/` 冻结种子与离线快照导出逻辑。 |
| `scanner/` | 由原项目 `tools/recover_type_universe.py` 的文件扫描逻辑整理，覆盖固定版本的 RTTI、基类和可识别的虚表前缀。 |

原创程序、构建文件及本仓库新增的工具代码按 MIT 许可提供。对游戏及引擎、编译器或第三方库保留的符号、反射名称、商标以及相应第三方表达，其权利仍归各权利人。MIT 授权范围限于贡献者有权授权的内容。目录中的 CPython 绑定名来自目标构建中的方法注册，本仓库未分发 CPython、Android NDK、游戏文件或其运行时实现。[许可证](LICENSE)
