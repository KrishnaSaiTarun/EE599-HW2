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


