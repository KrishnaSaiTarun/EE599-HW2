#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include<set>
#include<algorithm>

class Solution {
public:
  std::string PrintHelloWorld();

  void RemoveDupSet(std::vector<int> &in);

  void RemoveDup(std::vector<int> &in);

  void reverse(std::vector<int> &in);

  void removeOdd(std::vector<int> &in);

  std::vector<int> concatVec(std::vector<int> &a, std::vector<int> &b);

  std::vector<int> intersection(std::vector<int> a, std::vector<int> b);

};

#endif