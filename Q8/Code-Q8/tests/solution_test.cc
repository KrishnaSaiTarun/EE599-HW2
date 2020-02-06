#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, MedianFlip) {
  Solution solution;
  std::vector<int> in = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  std::vector<int> in1 = {};
  std::vector<int> in2 = {23, 12};
  std::vector<int> in3 = {100, 100, 100, 100, 100, 1, 1, 1, 1, 1};
  solution.Median(in);
  solution.Median(in1);
  solution.Median(in2);
  solution.Median(in3);
  std::vector<int> expected = { 43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99 };
  std::vector<int> expected1 = {};
  std::vector<int> expected2 = { 12, 23 };
  std::vector<int> expected3 = { 1, 1, 1, 1, 1, 100, 100, 100, 100, 100};
  
  EXPECT_EQ(expected, in);
  EXPECT_EQ(expected1, in1);
  EXPECT_EQ(expected2, in2);
  EXPECT_EQ(expected3, in3);
}