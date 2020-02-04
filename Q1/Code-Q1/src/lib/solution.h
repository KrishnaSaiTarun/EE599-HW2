#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  std::string PrintHelloWorld();

  int Add(int a, int b);

  std::string Add(std::string a, std::string b);

  std::string Add(std::string a, int b);

  std::string Add(int a, std::string b);
};

#endif