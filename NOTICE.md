# 数据来源与许可范围

类型数据取自网易《萤火突击》1.0.580 Android ARM64 版的 `libGame.so`。本仓库使用的分析结果位于 `MessiahNativeSDK-github-handoff.zip` 内的 `analysis/completion-work/`。该归档的 SHA-256 为 `67f192635a3863c18e05eed4140cac9812245bfa8bf4db23d894066f4e93ecb4`。原游戏二进制、素材和官方源码均未收录。

| 目录或文件 | 原始材料和整理方式 |
| --- | --- |
| `sdk/` | 目录、成员表、C/C++ 声明和部分布局取自 `generated/sdk/`。仓库中的 SDK 已去掉运行时依赖。 |
| `dump/` | 声明取自 `generated/dump.h`，保留了类型名的原始拼写、反射别名、字段命名依据、相对布局和具名签名。RTTI 引用以本地编号标记，总表与分包收录同一批声明。 |
| `data/field-names.tsv`、`data/reflected-type-names.tsv` | 索引取自 `native-recovered-candidate.json` 的字段和反射类型记录。字段名的来源已逐条与总表标注核对。 |
| `data/coverage.json` | 统计依据是 `completion-checkpoint.json`、`type-universe-validation.json` 以及对应数据中的实际条目。文件中还列有三份输入数据的 SHA-256。 |
| `exporter/` | 初始数据与离线导出逻辑均来自该归档的 `native-source/`。 |
| `scanner/` | 文件扫描逻辑改编自原项目的 `tools/recover_type_universe.py`，可读取该构建的 RTTI、基类关系及可识别的虚表前缀。 |

原创程序、构建文件和本仓库新增的工具代码采用 MIT 许可证，授权仅限于贡献者有权授权的内容。游戏、引擎、编译器或第三方库留下的符号、反射名称、商标及其他第三方表达，权利仍归各权利人。[MIT 许可证](LICENSE)

目录中的 CPython 绑定名来自目标构建的方法注册表。仓库未分发 CPython、Android NDK、游戏文件或它们的运行时实现。
