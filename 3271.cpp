#include <bits/stdc++.h>
using namespace std;

string stringHash(string s, int k) {
  string ans = "";
  for (int i = 0; i <= s.size() - k; i += k) {
    string res = s.substr(i, k);
    int sum = 0;

    for (int j = 0; j < res.size(); j++) {
      sum += int(res[j] - 'a');
    }

    sum %= 26;
    res = char(sum + 'a');

    ans += res;
  }
  return ans;
}

int main() { return 0; }
