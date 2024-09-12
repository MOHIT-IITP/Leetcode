#include<bits/stdc++.h>
using namespace std;
bool canBeEqual(vector<int> & target, vector<int> & arr){
  sort(arr.begin(), arr.end());
  sort(target.begin(), target.end());
  return target==arr;
}

int main()
{
  return 0;
}
