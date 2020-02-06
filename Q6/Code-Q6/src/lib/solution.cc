#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

bool Solution::isPalindrome(std::string s){

  if(s.length() == 0 || s.length() == 1) return true;

  int left = 0;
  int right = s.length() - 1;

  while(left < right){
    if(s[left] != s[right]) return false;

    left += 1;
    right -= 1;   
  }

  return true;
}

bool Solution::isApPalindrome(std::string s){

  if(s.length() == 0 || s.length() == 1) return true;

  int left = 0;
  int right = s.length() - 1;

  while(left < right){

    char l = tolower(s[left]);
    if( !isalpha(l) && !isdigit(l)){

      left += 1;
      continue;
    }

    
    char r = tolower(s[right]);
    if(!isalpha(r) && !isdigit(r)){

      right -= 1;
      continue;
    }

    if( l != r) return false;

    left += 1;
    right -= 1;
  }

  return true;
}





