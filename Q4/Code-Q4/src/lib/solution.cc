#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::swap(int &a, int &b){

  int temp = a;
  a = b;
  b = temp;
}

