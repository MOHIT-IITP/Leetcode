#include<bits/stdc++.h>

using namespace std;

string removeDuplicate(string s){
  stack<char> st;
  string ans;
  for(int i=0;i<s.size();i++){
    if(st.empty() || s[i]!=st.top()){
      st.push(s[i]);
    }
    else{
      st.pop();
    }
  }
  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main()
{
  string s= "abbaca";
  removeDuplicate(s);
  return 0;
}
