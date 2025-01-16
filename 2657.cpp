#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
    const int n = A.size();
    bitset<51> x = 0, y = 0;
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
      int a = A[i], b = B[i];
      x[a] = 1;
      y[b] = 1;
      ans[i] = (x & y).count();
    }
    return ans;
  }
};
int main() { return 0; }
