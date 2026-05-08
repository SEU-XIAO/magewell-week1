#include <gtest/gtest.h>
#include <string_utils/string_utils.hpp>

struct SplitParam{
    std::string input;
    char delim;
    std::vector<std::string> expected;
};

class SplitTest:public::testing::TestWithParam<SplitParam> {};

TEST_P(SplitTest,SplitByDelimiter){
    auto param=GetParam();
    EXPECT_EQ(string_utils::split(param.input,param.delim),param.expected);
}

INSTANTIATE_TEST_SUITE_P(
    SplitCases,
    SplitTest,
    ::testing::Values(
        SplitParam{"a,b,c",',',{"a","b","c"}},
        SplitParam{"hello",',',{"hello"}},
        SplitParam{"",',',{""}},
        SplitParam{"a,,b",',',{"a","","b"}}
    )
);