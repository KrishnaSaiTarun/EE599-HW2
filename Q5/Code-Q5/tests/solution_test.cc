#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, SwapIndex) {
  Solution solution;
  std::string in = "Hello World";
  std::string in1 = "Hello";
  std::string in2 = "H";
  std::string in3 = "Hell";
  solution.SwapIndex(in, 0, 10);
  solution.SwapIndex(in1, 0, 10);
  solution.SwapIndex(in2, 0, 10);
  solution.SwapIndex(in3, -3, 10);
  std::string expected = "dello WorlH";
  std::string expected1 = "Hello";
  std::string expected2 = "H";
  std::string expected3 = "Hell";
  EXPECT_EQ(expected, in);
  EXPECT_EQ(expected1, in1);
  EXPECT_EQ(expected2, in2);
  EXPECT_EQ(expected3, in3);
}

TEST(HelloWorldShould, Reverse) {
  Solution solution;
  std::string in = "Hello World";
  std::string in1 = "Hello";
  std::string in2 = "";
  //std::string in3 = "Hell";
  solution.Reverse(in);
  solution.Reverse(in1);
  solution.Reverse(in2);
  //solution.SwapIndex(in3, -3, 10);
  std::string expected = "dlroW olleH";
  std::string expected1 = "olleH";
  std::string expected2 = "";
  //std::string expected3 = "Hell";
  EXPECT_EQ(expected, in);
  EXPECT_EQ(expected1, in1);
  EXPECT_EQ(expected2, in2);
  //EXPECT_EQ(expected3, in3);
}

TEST(HelloWorldShould, tolower) {
  Solution solution;
  std::string in = "Hello World";
  std::string in1 = "Hello";
  std::string in2 = "";
  std::string in3 = "Hello599----";
  solution.lower(in);
  solution.lower(in1);
  solution.lower(in2);
  solution.lower(in3);
  std::string expected = "hello world";
  std::string expected1 = "hello";
  std::string expected2 = "";
  std::string expected3 = "hello599----";
  EXPECT_EQ(expected, in);
  EXPECT_EQ(expected1, in1);
  EXPECT_EQ(expected2, in2);
  EXPECT_EQ(expected3, in3);
}