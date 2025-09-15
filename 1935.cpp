#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        stringstream ss(text);
        string word;

        while (ss >> word) { 
            words.push_back(word);
        }
        set<char> st;
        for(auto it : brokenLetters){
            st.insert(it);
        }
        int count = 0;
        for(auto it : words){
            for(auto letter: it){
                if(st.find(letter) != st.end()){
                    count++;
                    break;
                }
            }
        }
        int n = words.size();
        return n - count;
    }
};

int main(){
    return 0;
}
