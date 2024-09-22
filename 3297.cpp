#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long validSubstringCount(string s, string p) {
    int tc[26] = {0};
    for (char c : p) {
      tc[c - 'a']++;
    }

    int wc[26] = {0};
    int l = 0;
    int n = p.length();
    long long res = 0;

    for (int r = 0; r < s.length(); r++) {
      char c = s[r];

      if (tc[c - 'a'] > 0) {
        if (wc[c - 'a'] < tc[c - 'a']) {
          n--;
        }
      }
      wc[c - 'a']++;
      while (n == 0) {
        res += s.length() - r;
        char sc = s[l];
        wc[sc - 'a']--;
        if (tc[sc - 'a'] > 0 && wc[sc - 'a'] < tc[sc - 'a']) {
          n++;
        }
        l++;
      }
    }
    return res;
  }
}

int main(){
  return 0;
}
