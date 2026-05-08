

find_package(GTest REQUIRED)

add_executable(string_utils_tests
    test_contains.cpp
    test_convert.cpp
    test_trim.cpp
    test_replace.cpp
    test_split.cpp
    test_join.cpp
)

target_link_libraries(string_utils_tests PRIVATE
    string_utils
    GTest::gtest_main
)


add_test(NAME string_utils_tests COMMAND string_utils_tests)