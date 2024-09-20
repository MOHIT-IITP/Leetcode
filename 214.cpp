#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string shortestPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    int n = s.length();
    for (int i = 0; i < n; i++) {
      if (!memcmp(s.c_str(), rev.c_str() + i, n - i)) {
        return rev.substr(0, i) + s;
      }
    }
    return rev + s;
  }
};
int main() { return 0; }
