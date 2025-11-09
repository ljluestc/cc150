# cc150_cpp

Cracking the Coding Interview（第六版）C++ 实现（项目骨架 + 测试）。

## 构建与测试

```bash
sudo apt install cmake g++ make
cd cc150_cpp
mkdir build && cd build
cmake ..
make -j
ctest --output-on-failure
```

## 目录结构

```
cc150_cpp/
├── CMakeLists.txt
├── include/
│   ├── listnode.h
│   ├── tree.h
│   ├── utils.h
│   └── test_utils.h
├── src/
│   └── chapter01_arrays_strings/
│       ├── 1_1_is_unique.cpp
│       ├── 1_2_check_permutation.cpp
│       ├── 1_3_urlify.cpp
│       ├── 1_4_palindrome_permutation.cpp
│       ├── 1_5_one_away.cpp
│       └── 1_6_string_compression.cpp
└── tests/
    ├── CMakeLists.txt
    └── test_main.cpp
```

首批实现与测试位于 Chapter 1（1.1–1.6）。更多章节可按相同方式扩展。


