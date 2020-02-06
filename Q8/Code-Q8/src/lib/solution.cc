#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::Median(std::vector<int> &a){

  int n = a.size();

  if(n == 0 || n == 1) return;
  //Sort it
  sort(a.begin(), a.end());

  //FInd the median and flip left side
  int flip_pos = -1;

  if(n % 2 == 0) {
    
    flip_pos = (n / 2)- 1;
    flip(a, 0, flip_pos);
  }
  else {

    flip_pos = (n - 1)/2;
    flip(a, 0, flip_pos - 1);
  }

  //Flip the right side
  flip(a, flip_pos + 1, n - 1);

}

void Solution::flip(std::vector<int> &a, int left, int right){

  if(left >= right) return;

  while(left < right){

    int temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    left += 1;
    right -= 1;
  }
}





