// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

class Solution {
public:
  int countZero(string s) {
    int n = s.length();
    int count = 0;
    for (auto it : s) {
      if (it == '0') {
        count++;
      }
    }
    return count;
  }
  int countOne(string s) {
    int n = s.length();
    int count = 0;
    for (auto it : s) {
      if (it == '1') {
        count++;
      }
    }
    return count;
  }
  int maxScore(string s) {
    int n = s.length();
    int total = 0;
    for (int i = 1; i < n; i++) {
      string left = s.substr(0, i);
      string right = s.substr(i, n);
      total = max(total, countZero(left) + countOne(right));
    }
    return total;
  }
};
int main() { return 0; }
