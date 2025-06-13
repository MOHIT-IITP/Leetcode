#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        if (n != m) {
            return false;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(auto it : word1){
            mp1[it]++;
        }
        for(auto kit : word2){
            mp2[kit]++;
        }

        set<char> st1;
        set<char> st2;


        vector<int> vec1;
        vector<int> vec2;
        for(auto const & i : mp1){
            vec1.push_back(i.second);
            st1.insert(i.first);
        }
        for(auto const & j : mp2){
            vec2.push_back(j.second);
            st2.insert(j.first);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        if(vec1 != vec2){
            return false;
        }
        if(st1 != st2){
            return false;
        }

        return true;
    }
};

int main(){
    return 0;
}

