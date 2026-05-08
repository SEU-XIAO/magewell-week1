string-utils/
├── CMakeLists.txt              # 顶层：项目入口，控制全局行为
├── cmake/
│   └── CompilerWarnings.cmake  # 自定义模块：练习 cmake 的模块化机制
├── include/
│   └── string_utils/
│       └── string_utils.hpp    # 公共头文件：库的对外接口
├── src/
│   ├── CMakeLists.txt          # 库的构建描述
│   └── string_utils.cpp        # 库的实现
├── app/
│   ├── CMakeLists.txt          # 可执行文件的构建描述
│   └── main.cpp                # 演示程序，使用我们的库
└── tests/
    ├── CMakeLists.txt          # 测试的构建描述
    ├── test_split.cpp          # 测试 split 函数
    ├── test_trim.cpp           # 测试 trim 函数
    ├── test_join.cpp           # 测试 join 函数
    ├── test_replace.cpp        # 测试 replace 函数
    └── test_convert.cpp        # 测试大小写转换等
