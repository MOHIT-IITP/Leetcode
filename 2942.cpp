// using lambda Capture
class Solution {
    public:
        vector<int> findWordsContaining(vector<string>& words, char x) {
            int n = words.size();
            auto lambda = [x](char it){
                return it == x;
            };
            vector<int> vec;
            for(int i =0;i<n;i++){
                if(any_of(words[i].begin(), words[i].end(), lambda)){
                    vec.push_back(i);
                }
            }
            return vec;
        }
};

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        set<int> st;
        for(int i =0;i<n;i++){
            for(auto it : words[i]){
                if(it == x){
                    st.insert(i);
                }
            }
        }
        vector<int> vec(st.begin(), st.end());
        return vec;
    }
};
int main(){
    return 0;
}

