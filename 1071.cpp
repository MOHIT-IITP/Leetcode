#include<bits/stdc++.h>

using namespace std;

string gcdofStrings(string s1, string s2){
  return (s1+s2==s2+s1)? s1.substr(0, gcd(size(s1),size(s2))): "";
  // gcd will  find the common divisor 
  // substr will concate the s1 from 0 to gcd value
  // ? is to check whether it is correct or not 

int main()
{
  string a = "abcabc";
  string b = "abc";
  string res = gcdofStrings(a,b);
  cout<<res;
  return 0;
}
