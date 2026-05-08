#include<gtest/gtest.h>
#include <string_utils/string_utils.hpp>

TEST(ReplaceTest,BasicReplace){
    EXPECT_EQ(string_utils::replace("hello world","world","cmake"),"hello cmake");
}

TEST(ReplaceTest,MultipleOccurrences){
    EXPECT_EQ(string_utils::replace("aaa","a","bb"),"bbbbbb");
}

TEST(ReplaceTest,NotFound){
    EXPECT_EQ(string_utils::replace("hello","hsh","sgdhag"),"hello");
}

TEST(ReplaceTest,EmptyFrom){
    EXPECT_EQ(string_utils::replace("hello","","abc"),"hello");
}

TEST(ReplaceTest,ReplaceWithEmpty){
    EXPECT_EQ(string_utils::replace("hello world","world",""),"hello ");
}