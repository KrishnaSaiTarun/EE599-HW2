#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::swap(int &a, int &b){

  if (a == NULL || b == NULL) return; //Dont swap a null pointer!
  int temp = a;
  a = b;
  b = temp;
}

