#include <gtest/gtest.h>
#include <string_utils/string_utils.hpp>

TEST(ConvertTest,ToUpper ){
    EXPECT_EQ(string_utils::to_upper("hello"),"HELLO");
}

TEST(ConvertTest,ToUpperMixed) {
    EXPECT_EQ(string_utils::to_upper("Hello123!"),"HELLO123!");
}

TEST(ConvertTest,ToUpperEmpty) {
    EXPECT_EQ(string_utils::to_upper(""),"");
}

TEST(ConvertTest,Tolower) {
    EXPECT_EQ(string_utils::to_lower("HELLO"),"hello");
}

TEST(ConvertTest,TolowerMixed) {
    EXPECT_EQ(string_utils::to_lower("Hello123!"),"hello123!");
}

TEST(ConvertTest,TolowerEmpty){
    EXPECT_EQ(string_utils::to_lower(""),"");
}