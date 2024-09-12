#include<bits/stdc++.h
using namespace std;
class Solution(){
public:
  string nearestPalindrome(string n){
    int len = n.length();
    if(len == 1){
      return to_string(stoi(n)-1);
    }
    vector<long long> ans;
    ans.push_back(pow(10, len-1)+1);
    ans.push_back(pow(10, len)-1);
    long long prefix = stoll(n.substr(0,(len+1)/2));

    for(int i =-1 ;i<=1;i++){
      string p = to_string(prefix+i);
      string res = p + string(p.rbegin() + (len %2 ), p.rend());
      ans.push_back(stoll(res));
    }
    long long num = stoll(n);
    long long near = -1;
    for(long long a : ans){
      if(a == num) continue;
      if(near == -1 || abs(a-num) < abs(near-num) || (abs(a-num)== abs(near-num) && a<near)){
          near = a;
        }
      }
    return to_string(near);
  }
}
int main(){
  return 0;
}
