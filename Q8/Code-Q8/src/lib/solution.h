#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
  std::string PrintHelloWorld();

  void Median(std::vector<int> &a);
private:

  void flip(std::vector<int> &a, int left, int right);
  
};

#endif