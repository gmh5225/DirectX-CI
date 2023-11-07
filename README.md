# DirectX-CI

[![Gitpod ready-to-code](https://img.shields.io/badge/Gitpod-ready--to--code-blue?logo=gitpod)](https://gitpod.io/from-referrer/)


## Building (command line)

```
cmake -B build
cmake --build build
```

Then open the `.sln` (Windows) or run `make` (Unix) from the `build` directory.

## cmake.toml

Under the hood cmkr generates the `CMakeLists.txt` required to build this project from the `cmake.toml` file:

```toml
[project]
name = "cmkr_for_beginners"
description = "A minimal cmkr project."

[target.hello_world]
type = "executable"
sources = ["src/main.cpp"]
```
