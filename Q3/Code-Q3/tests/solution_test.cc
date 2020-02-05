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

TEST(HelloWorldShould, reverse) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1};
  std::vector<int> in2 = {};
  solution.reverse(in);
  solution.reverse(in1);
  solution.reverse(in2);
  std::vector<int> expect = {5,4,4,3,2,1,1};
  std::vector<int> expect1 = {1,1};
  std::vector<int> expect2 = {};
  EXPECT_EQ(expect, in);
  EXPECT_EQ(expect1, in1);
  EXPECT_EQ(expect2, in2);
}

TEST(HelloWorldShould, removeODD) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1};
  std::vector<int> in2 = {};
  solution.removeOdd(in);
  solution.removeOdd(in1);
  solution.removeOdd(in2);
  std::vector<int> expect = {2,4,4};
  std::vector<int> expect1 = {};
  std::vector<int> expect2 = {};
  EXPECT_EQ(expect, in);
  EXPECT_EQ(expect1, in1);
  EXPECT_EQ(expect2, in2);
}

TEST(HelloWorldShould, concatenateVec) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1};
  std::vector<int> in2 = {};
  std::vector<int> out = solution.concatVec(in , in1);
  std::vector<int> out1 = solution.concatVec(in1, in2);
  std::vector<int> out2 = solution.concatVec(in2, in);
  std::vector<int> expect = {1,1,2,3,4,4,5,1,1};
  std::vector<int> expect1 = {1,1};
  std::vector<int> expect2 = {1,1,2,3,4,4,5};
  EXPECT_EQ(expect, out);
  EXPECT_EQ(expect1, out1);
  EXPECT_EQ(expect2, out2);
}

TEST(HelloWorldShould, Intersection) {
  Solution solution;
  std::vector<int> in = {1,1,2,3,4,4,5};
  std::vector<int> in1 = {1,1,2};
  std::vector<int> in2 = {};
  std::vector<int> out = solution.intersection(in , in1);
  std::vector<int> out1 = solution.intersection(in1, in2);
  std::vector<int> out2 = solution.intersection(in2, in);
  std::vector<int> expect = {1,1,2};
  std::vector<int> expect1 = {};
  std::vector<int> expect2 = {};
  EXPECT_EQ(expect, out);
  EXPECT_EQ(expect1, out1);
  EXPECT_EQ(expect2, out2);
}