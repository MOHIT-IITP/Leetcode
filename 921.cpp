#include<bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s){
    stack<char> st;
    int count = 0;

    for(int i =0;i<s.length();i++){
        char curr = s[i];
        if(curr == '('){
            st.push(curr);
        }
        else{
            if(!st.empty()) st.pop();
            else{
                count++;
            }
        }
    }
    if(st.empty()) return count;
    return st.size() + count;
}

int main(){
    return 0;
}
