#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, sum) {
  Solution solution;


  auto actual1 = solution.Add(1, 4);
  auto expected1 = 5;
  EXPECT_EQ(expected1, actual1);

  auto actual2 = solution.Add("Hello ", "World");
  auto expected2 = "Hello World";
  EXPECT_EQ(expected2, actual2);

  auto actual3 = solution.Add("Hello", -4);
  auto expected3 = "Hello-4";
  EXPECT_EQ(expected3, actual3);

  auto actual4 = solution.Add(-1, "Hello");
  auto expected4 = "-1Hello";
  EXPECT_EQ(expected4, actual4);
}