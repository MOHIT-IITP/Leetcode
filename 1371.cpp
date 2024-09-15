#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int findTheLongestSubstring(string s) {
    unordered_map<string, int> mp;

    vector<int> vec(5, 0);
    string st = "00000";
    mp[st] = -1; // Handle case where substring starts from index 0

    int result = 0;
    for (int i = 0; i < s.length(); i++) {
      // Update the vector based on the current character
      if (s[i] == 'a') {
        vec[0] = (vec[0] + 1) % 2;
      } else if (s[i] == 'e') {
        vec[1] = (vec[1] + 1) % 2;
      } else if (s[i] == 'i') {
        vec[2] = (vec[2] + 1) % 2;
      } else if (s[i] == 'o') {
        vec[3] = (vec[3] + 1) % 2;
      } else if (s[i] == 'u') {
        vec[4] = (vec[4] + 1) % 2;
      }

      // Construct the string representation of the vector
      st = "";
      for (int j = 0; j < 5; j++) {
        st += to_string(vec[j]);
      }

      // Check if this state has been seen before
      if (mp.find(st) != mp.end()) {
        result = max(result, i - mp[st]);
      } else {
        mp[st] = i;
      }
    }

    return result;
  }
};

int main() { return 0; }
