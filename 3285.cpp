#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> stableMountains(vector<int> &height, int threshold) {
    vector<int> ans;
    for (int i = 0; i < height.size(); i++) {
      if (i > 0 && height[i - 1] > threshold) {
        ans.push_back(i);
      }
    }
    return ans;
  }
};
int main() { return 0; }
