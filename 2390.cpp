#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto it : s){
            if(it == '*')
                st.pop();
            else 
                st.push(it);
        }
        string ans = "";
        while(!st.empty()){
            char top = st.top();
            st.pop();
            ans += top;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    return 0;
}
