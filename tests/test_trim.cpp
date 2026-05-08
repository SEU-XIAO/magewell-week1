#include<gtest/gtest.h>
#include<string_utils/string_utils.hpp>

class TrimTest:public ::testing::Test{
    protected:
    std::string both_spaces=" hello ";
    std::string left_spaces=" hello";
    std::string right_spaces="hello ";
    std::string all_spaces="     ";
    std::string no_spaces="hello";
};

TEST_F(TrimTest,TrimBoth){
    EXPECT_EQ(string_utils::trim(both_spaces),"hello");
}

TEST_F(TrimTest,TrimLeft){
    EXPECT_EQ(string_utils::trim_left(left_spaces),"hello");
}

TEST_F(TrimTest,TrimRight){
    EXPECT_EQ(string_utils::trim_right(right_spaces),"hello");
}

TEST_F(TrimTest,TrimALLSpaces){
    EXPECT_EQ(string_utils::trim(all_spaces),"");
}

TEST_F(TrimTest,TrimNoSpaces){
    EXPECT_EQ(string_utils::trim(no_spaces),"hello");
}