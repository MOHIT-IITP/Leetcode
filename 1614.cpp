#include<bits/stdc++.h>

using namespace std;

int maxDepth( string s){
  stack<char> st;
  int currCount =0;
  int max_co  = 0;
  for(int i = 0;i<s.size();i++){
    if(s[i]=='('){
      st.push(s[i]);
      currCount++;
    }
    if(s[i]==')'){
      st.pop();
      max_co = max(currCount, max_co);
      currCount--;
    }
  }
  return max_co;

}

int main()
{
  string s= "(1+(2*3)+((8)/3))+1";
  int res = maxDepth(s);
  cout<<res;
  return 0;
}
