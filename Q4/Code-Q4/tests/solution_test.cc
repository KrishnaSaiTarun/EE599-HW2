#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, swap) {
  Solution solution;
  int a = 20;
  int b = 30;
  solution.swap(a , b);
  //std::string expected = "**** Hello World ****";
  EXPECT_EQ(30, a);
  EXPECT_EQ(20, b);
}