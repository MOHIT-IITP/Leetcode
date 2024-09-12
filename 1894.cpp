#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int chalkReplacer(vector<int> &chalk, int k) {
    // using long long because of long was in the test case
    long long chalkSum = accumulate(chalk.begin(), chalk.end(), 0LL);
    k %= chalkSum;
    for (int i = 0; i < chalk.size(); i++) {
      if (chalk[i] > k)
        return i;
      k -= chalk[i];
    }
    return -1;
  }
};

int main() { return 0; }
