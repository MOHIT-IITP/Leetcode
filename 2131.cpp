class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> count;
        int ans = 0;
        bool centerUsed = false;

        // Count occurrences of each word
        for (string& word : words) {
            count[word]++;
        }

        for (auto& [word, freq] : count) {
            string rev = string{word.rbegin(), word.rend()};

            if (word == rev) {
                // For words like "aa", "bb"
                ans += (freq / 2) * 4;
                if (freq % 2 == 1 && !centerUsed) {
                    ans += 2;
                    centerUsed = true;
                }
            } else if (count.find(rev) != count.end()) {
                int pairCount = min(freq, count[rev]);
                ans += pairCount * 4;
                // Set both to zero so they don't get counted again
                count[rev] = 0;
                count[word] = 0;
            }
        }

        return ans;
    }
};


// using brute force but not getting correct answer
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        int common = 0;
        for(int i = 0 ; i<n; i++){
            for(int j=i+1;j<n;j++){
                if(words[i][0] == words[j][1] && words[i][1] == words[j][0]){
                    ans += 4;
                }
                if(words[i][0] == words[i][1] && common == 0 ){
                    ans += 2;
                    common++;
                }
            }
        }
        return ans;
    }
};

