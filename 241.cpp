#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> diffWaysToCompute(string expression) {
    vector<int> ans;
    for (int i = 0; i < expression.size(); i++) {
      char x = expression[i];
      if (x == '-' || x == '+' || x == '*') {
        vector<int> a = diffWaysToCompute(expression.substr(0, i));
        vector<int> b = diffWaysToCompute(expression.substr(i + 1));
        for (int m : a) {
          for (int n : b) {
            if (x == '+')
              ans.push_back(m + n);
            else if (x == '-')
              ans.push_back(m - n);
            else if (x == '*')
              ans.push_back(m * n);
          }
        }
      }
    }
    if (ans.empty())
      ans.push_back(stoi(expression));
    return ans;
  }
};
int main() { return 0; }
