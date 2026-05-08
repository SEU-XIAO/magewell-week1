add_library(string_utils STATIC
    string_utils.cpp
)
# 用 string_utils.cpp 构建一个静态库，名字叫 string_utils

target_include_directories(string_utils
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(string_utils PUBLIC cxx_std_17)

set_project_warnings(string_utils)