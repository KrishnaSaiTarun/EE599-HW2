#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::SwapIndex(std::string &s, int i, int j){

  if(s.length() == 0 || s.length() == 1) return;
  if(i < 0 || j < 0 || i==j) return;
  if(i > s.length() || j > s.length()) return;

  char c = s[i];
  s[i] = s[j];
  s[j] = c;
}

void Solution::Reverse(std::string &s){

  if(s.length() == 0 || s.length() == 1) return;

  int left = 0;
  int right = s.length() - 1;

  while(left < right) {

    char c = s[left];
    s[left] = s[right];
    s[right] = c;
    left += 1;
    right -= 1;
  }
}

void Solution::lower(std::string &s){

  if(s.length() == 0) return;

  for(int i = 0; i < s.length(); i++)
    s[i] = std::tolower(s[i]);
  
}




