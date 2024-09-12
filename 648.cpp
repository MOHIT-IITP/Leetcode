#include<bits/stdc++.h>
#include<iostream>

string replaceWord(vector<string> & dict, string sen){
  int index=0;
  for(int i =0;i<sen.length();i++){
    if(dict[index]==sen[i]){
      index++;
      swap(dict[index],sen[i]);
    }
  }
  return sen;
}

int main()
{
  return 0;
}
