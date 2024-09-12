#include<bits/stdc++.h>

using namespace std;

int heightChecker(vector<int> & heights){
  int count =0;
  int n = heights.size();
  vector<int> check=heights;
  sort(check.begin(),check.end());
  for(int i =0;i<heights.size();i++){
    if(check[i]==heights[i]){
      count++;
    }
  }
  return n-count;

}

int main()
{
  vector<int> heights({1,1,4,2,1,3});
  int res = heightChecker(heights);
  cout<<res;
  return 0;
}


