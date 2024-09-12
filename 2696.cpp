#include<bits/stdc++.h>

using namespace std;

int minLength(string s){
  stack<char> st;
  st.push('#');
  for(int i=0;i<s.size();i++){
    st.push(s[i]);
    if(st.top()=='B'){
      st.pop();
      if(st.top()=='A')st.pop();
      else st.push('B');
    }
    else if(st.top()=='D'){
      st.pop();
      if(st.top()=='C')st.pop();
      else st.push('D');
    }
  }
  return st.size()-1;
}


int main()
{
  string s = "ABFCACDB";
  int res = minLength(s);
  cout<<res;
  return 0;
}
