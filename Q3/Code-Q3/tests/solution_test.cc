#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, removeDupSet) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1};
  std::vector<int> in2 = {};
  solution.RemoveDupSet(in);
  solution.RemoveDupSet(in1);
  solution.RemoveDupSet(in2);
  std::vector<int> expect = {1,2,3,4,5};
  std::vector<int> expect1 = {1};
  std::vector<int> expect2 = {};
  EXPECT_EQ(expect, in);
  EXPECT_EQ(expect1, in1);
  EXPECT_EQ(expect2, in2);
}

TEST(HelloWorldShould, removeDup) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1};
  std::vector<int> in2 = {};
  solution.RemoveDup(in);
  solution.RemoveDup(in1);
  solution.RemoveDup(in2);
  std::vector<int> expect = {1,2,3,4,5};
  std::vector<int> expect1 = {1};
  std::vector<int> expect2 = {};
  EXPECT_EQ(expect, in);
  EXPECT_EQ(expect1, in1);
  EXPECT_EQ(expect2, in2);
}