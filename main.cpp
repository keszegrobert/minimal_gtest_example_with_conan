#include <gtest/gtest.h>

TEST(SimpleTest, SimpleCase)
{
    ASSERT_FALSE(false);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}