#include <bits/stdc++.h>
using namespace std;
long long findMaximumScore(vector<int> &nums) {
  long maxScore = 0, sum = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    maxScore = max(maxScore, static_cast<long>(nums[i]));
    sum += maxScore;
  }
  return sum;
}

int main() { return 0; }
