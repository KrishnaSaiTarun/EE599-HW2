#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

void Solution::RemoveDupSet(std::vector<int> &in){

  if(in.size() == 0) return;

  std::set<int> s;
  for(auto i = in.begin(); i != in.end(); i++) s.insert(*i); //Insert all the values inside the set

	std::vector<int>::iterator itr = in.begin();
  for(auto i = s.begin(); i != s.end(); i++){

    *itr = *i;
    itr++;
  }

  in.erase(itr, in.end());
}

void Solution::RemoveDup(std::vector<int> &in){

  if(in.size() == 0) return;

  //Use the stl std::remove function to remove dublicates and resize the vector and return the new end of the vector!!

  auto new_end = in.end();
  for(auto i = in.begin(); i != new_end; i++){

      new_end = std::remove(i+1, in.end(), *i);
  }

  in.erase(new_end, in.end());

}

void Solution::reverse(std::vector<int> &in){

  if(in.size() == 0 || in.size() == 1) return;

  int left = 0;
  int right = in.size()-1;

  while(left < right){

    int temp = in[left];
    in[left] = in[right];
    in[right] = temp;
    left += 1;
    right -= 1;
  }

  return;

}

void Solution::removeOdd(std::vector<int> &in){

  if(in.size() == 0) return;

  std::vector<int> even;

  for(auto i : in){

    if(i%2 == 0) even.push_back(i);
  }

  auto it = in.begin();

  for(auto i = even.begin(); i != even.end(); i++){

    *it = *i;
    it++;
  }

  in.erase(it, in.end());
  
}

std::vector<int> Solution::concatVec(std::vector<int> &a, std::vector<int> &b){

  std::vector<int> out;

  for(auto i : a) out.push_back(i);
  for(auto i : b) out.push_back(i);

  return out;  
}

std::vector<int> Solution::intersection(std::vector<int> a, std::vector<int> b){

  //Let us use set_intersection. So we need to sort our inputs first
  // NOt calling by reference because of the sort!

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  //Template for set_intersection:

  /*<class InputIterator1, class InputIterator2, class OutputIterator>
  OutputIterator set_intersection (InputIterator1 first1, InputIterator1 last1,
  InputIterator2 first2, InputIterator2 last2,
  OutputIterator result);*/

  std::vector<int> out(a.size() + b.size(), 0); //initialize
  std::vector<int>::iterator it;

  it = std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), out.begin());

  out.resize(it - out.begin());
  
  return out;
}



