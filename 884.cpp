#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  vector<string> split(string &s) {
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word) {
      words.push_back(word);
    }
    return words;
  }

public:
  vector<string> uncommonFromSentences(string s1, string s2) {
    vector<string> v1;
    vector<string> v2;
    vector<string> ans;
    v1 = split(s1);
    v2 = split(s2);
    unordered_map<string, int> mp;
    for (auto it : v1) {
      mp[it]++;
    }
    for (auto it : v2) {
      mp[it]++;
    }
    for (const auto &[word, cnt] : mp) {
      if (cnt == 1) {
        ans.push_back(word);
      }
    }
    return ans;
  }
};
int main() { return 0; }
