#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Add(int a, int b){

  return a + b;

}

std::string Solution::Add(std::string a, std::string b){

  return a + b;
}

std::string Solution::Add(std::string a, int b){

  std::string num = "";

  if(b == 0) return a + "0";
  int flag = 0;

  if(b < 0){
    flag = 1;
    b *= -1;
  }

  while(b != 0){

    int d = b % 10;
    char c = d + '0';
    num = c + num;
    b /= 10;
  }

  if(flag) return a + "-" + num;

  else return a + num;
}

std::string Solution::Add(int a, std::string b){

  std::string num = "";

  if(a == 0) return a + "0";
  int flag = 0;

  if(a < 0){
    flag = 1;
    a *= -1;
  }

  while(a != 0){

    int d = a % 10;
    char c = d + '0';
    num = c + num;
    a /= 10;
  }

  if(flag) return "-" + num + b;

  else return num + b;

}

