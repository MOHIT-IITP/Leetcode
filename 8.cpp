#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s){
  int i =0, n = s.size();
  while(i<n && s[i] == ' '){
    i++;
  }
  int sign = 1;
  if(i<n && (s[i] == '-' || s[i] == '+')){
    sign = (s[i] == '-') ? -1:1;
    i++;
  }
  long long result = 0;
  while(i<n && isdigit(s[i])){
    result = result * 10 + (s[i] - '0');
    if(result * sign > INT_MAX) return INT_MAX;
    if(result * sign < INT_MIN) return INT_MIN;
    i++;
  }
  return static_cast<int>(result*sign);
}

int main()
{
  return 0;
}
