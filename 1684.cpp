#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countConsistentStrings(string allowed, vector<string> &words) {
    unordered_set<char> st;

    for (char it : allowed) {
      st.insert(it);
    }

    int count = 0;

    for (const auto &word : words) {
      bool consistent = ture;
      for (char c : word) {
        if (st.find(c) == st.end()) {
          consistent = false;
          break;
        }
      }
      if (consistent)
        count++;
    }
    return count;
  }
}

int main(){
  return 0;
}
