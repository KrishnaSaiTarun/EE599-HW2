#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, palindrome) {
  Solution solution;
  bool actual = solution.isPalindrome("abba");
  bool actual1 = solution.isPalindrome("abbaa");
  bool actual2 = solution.isPalindrome("");
  bool actual3 = solution.isPalindrome("/123aaa321/");
  //bool expected = "**** Hello World ****";
  EXPECT_EQ(true, actual);
  EXPECT_EQ(false, actual1);
  EXPECT_EQ(true, actual2);
  EXPECT_EQ(true, actual3);

}

TEST(HelloWorldShould, Approxpalindrome) {
  Solution solution;
  bool actual = solution.isApPalindrome("A man, a plan, a canal, Panama!");
  bool actual1 = solution.isApPalindrome("Was it a car or a cat I saw?");
  bool actual2 = solution.isApPalindrome("Ee599e");
  bool actual3 = solution.isApPalindrome("No 'x' in Nixon");
  //bool expected = "**** Hello World ****";
  EXPECT_EQ(true, actual);
  EXPECT_EQ(true, actual1);
  EXPECT_EQ(false, actual2);
  EXPECT_EQ(true, actual3);

}