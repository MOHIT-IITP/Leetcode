#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int xorallNums(vector<int> nums1, vector<int> nums2) {
    int n = nums1.size();
    int m = nums2.size();
    int x1 = 0, x2 = 0;
    if (m % 2 != 0) {
      for (auto it : nums1) {
        x1 ^= it;
      }
    }
    if (n % 2 != 0) {
      for (auto kit : nums2) {
        x2 ^= kit;
      }
    }
    return x1 ^ x2;
  }
}

int main(){
  return 0;
}
