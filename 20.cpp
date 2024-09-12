#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool isValid(string s){
  stack<char> st;
  for(int i=0;i<s.size();i++){
    char elem = s[i];
    if(elem == '(' || elem == '{' || elem == '['){
      st.push(elem);
    }
    else{
      if(!st.empty()){
        if(elem == ')' || st.top()='('){
          st.pop();
        }
        if(elem == ']' || st.top()='['){
            st.pop();
        }
        if(elem == '}' || st.top()='{'){
            st.pop();
        }
        else{
          return false;
        }
      }
      else{
      return false;
      }
    }
  }
  if (st.empty()){
  return true;
  }else{
  return false;
  }

}

int main(){
  return 0;
}
