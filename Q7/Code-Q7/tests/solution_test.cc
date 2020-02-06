#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, mapping) {
  Solution solution;
  std::map<char, char> actual = solution.FromTo("add", "egg");
  std::map<char, char> actual1 = solution.FromTo("extreme", "egg");
  std::map<char, char> actual2 = solution.FromTo("harder", "waiter");
  std::map<char, char> actual3 = solution.FromTo("aabbrr", "ddeekk");
  std::map<char, char> actual4 = solution.FromTo("add", "add");
  std::map<char, char> expected = {{'a','e'}, {'d','g'}};
  std::map<char, char> expected1 = {};
  std::map<char, char> expected2 = {};
  std::map<char, char> expected3 = {{'a','d'}, {'b','e'}, {'r','k'}};
  std::map<char, char> expected4 = {};
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected4, actual4);
}