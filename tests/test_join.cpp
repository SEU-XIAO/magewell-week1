// 缺少这两行
#include <gtest/gtest.h>
#include <string_utils/string_utils.hpp>

TEST(JoinTest, BasicJoin) {
    EXPECT_EQ(string_utils::join({"a", "b", "c"}, ","), "a,b,c");
}

TEST(JoinTest, SingleElement) {
    EXPECT_EQ(string_utils::join({"hello"}, ","), "hello");
}

TEST(JoinTest, EmptyVector) {
    EXPECT_EQ(string_utils::join({}, ","), "");
}
