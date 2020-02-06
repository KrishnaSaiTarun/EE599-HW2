#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::map<char, char> Solution::FromTo(std::string a, std::string b){

  std::map<char, char> out;
  std::map<char, char> empty;

  if(a.length() != b.length()) return out;

  for(int i = 0; i < a.length(); i++){

    //If element already there
    if(out.find(a[i]) != out.end()){

      //If the exisiting mapping is not the same one, mapping is not possible!
      if(out[a[i]] != b[i]) return empty;
    }

    else{
      out[a[i]] = b[i];
    }
  }

  std::vector<char> clear;
  //Clear the mappings with same elements

  for(auto it = out.begin(); it != out.end(); it++){

    if(it->first == it->second) clear.push_back(it->first);
  }

  for(int i = 0; i < clear.size(); i++){

    out.erase(clear[i]);
  }

  return out;
}





