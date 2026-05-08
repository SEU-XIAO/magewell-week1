# 第一行永远是这个。它告诉 CMake："我这个项目至少需要 3.16 版本"。
cmake_minimum_required(VERSION 3.16)
# 声明项目名称、版本号、使用的语言。
project(StringUtils VERSION 1.0.0 LANGUAGES CXX)
# 定义一个开关。用户可以通过 cmake -DBUILD_TESTS=OFF .. 来关闭测试构建。option 是 CMake 管理项目配置的核心手段。
option(BUILD_TESTS "Build unit tests" ON)
include(cmake/CompilerWarnings.cmake)
add_subdirectory(src)
add_subdirectory(app)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()