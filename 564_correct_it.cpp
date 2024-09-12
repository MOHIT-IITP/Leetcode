#include<bits/stdc++.h>
#include<math.h>
using namespace std;

string nearestPalindromic(string nu){
  int n = nu.size();
  vector<int> ans;
  if(n%2==0){
    int half = n.substr(0,n/2);
    ans.push_back(make_palindrome(half));
    ans.push_back(make_palindrome(half+"1"));
    ans.push_back(make_palindrome(half-"1"));
  }
  else{
    int half = n.substr(0,n/2+1);
    ans.push_back(make_palindrome(half));
    ans.push_back(make_palindrome(half+"1"));
    ans.push_back(make_palindrome(half-"1"));
  }
  long long fourth = pow(10,n)-1;
  long long fifth = pow(10,n)+1;
  long minDiff = MAX_INT;
  for(auto elem: ans){
    if(to_string(elem) == n){
      continue;
    }
    long currDiff = abs(elem-n);
    if(currDiff<minDiff){
      minDiff = currDiff;
    }
  }
  return to_sting(minDiff);

}
string make_palindrome(string num){
  string reve = num;
  reverse(reve.begin(),reve.end());
  return num+reve;
}

int main(){
  string n;
  cin>>n;
  cout<<nearestPalindromic(n);
  return 0;
}

