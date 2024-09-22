#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool reportSpam(vector<string> &message, vector<string> &bannedWords) {
      unordered_set<string> bannedSet<bannedWords.begin(),bannedWords.end());
      int count = 0;

      for (const auto &word : message) {
        if (bannedSet.find(word) != bannedSet.end()) {
          count++;
          if (count >= 2) {
            return true;
          }
        }
      }
      return false;
  }
}

int main(){
  return 0;
}
