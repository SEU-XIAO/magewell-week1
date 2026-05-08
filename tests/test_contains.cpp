#include <gtest/gtest.h>
#include <string_utils/string_utils.hpp>

TEST(ContainsTest,FindSubstring){
    EXPECT_TRUE(string_utils::contains("Hello, World!","World"));
}

TEST(ContainsTest,NotFound){
    EXPECT_FALSE(string_utils::contains("Hello, World!","asdas"));
}

TEST(ContainsTest,NotFoundOtherInput){
    EXPECT_FALSE(string_utils::contains("Hello, World!","hjsghds"));
}

TEST(ContainsTest,EmptyString1){
    EXPECT_TRUE(string_utils::contains("",""));
}

TEST(ContainsTest,EmptyString2){
    EXPECT_FALSE(string_utils::contains("","sdjhs00"));
}
