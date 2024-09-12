#include <bits/stdc++.h>
using namespace std;

class Solution() {
public:
  int maxVowels(string s, int k) {
    int left = 0, right = 0;
    int maxCount = 0, currCount = 0;

    while (right < s.size()) {
      if (isVowel(s[right])) {
        currCount++;
      }

      if (right - left + 1 == k) {
        maxCount = max(maxCount, currCount);
        if (isVowel(s[left])) {
          currCount--;
        }
        left++;
      }
    }
    right++;
  }
  return maxCount;
}

int main() { return 0; }
