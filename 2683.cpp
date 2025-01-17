#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  static bool doesValidArrayExist(vector<int> &derived) {
    return (reduce(derived.begin(), derived.end(), 0) & 1) == 0;
  }
};
int main() { return 0; }
