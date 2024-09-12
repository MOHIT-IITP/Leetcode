#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string convertDateToBinary(string date) {
    string res;

    string year = date.substr(0, 4);
    string month = date.substr(5, 2);
    string day = date.substr(8, 2);

    res += change(year);
    res += "-";
    res += change(month);
    res += "-";
    res += change(day);

    return res;
  }

  string change(std::string x) {
    string ans = "";
    int num = std::stoi(x);

    if (num == 0)
      return "0";
    while (num > 0) {
      ans += (num % 2 == 0) ? "0" : "1";
      num /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }
};

int main() { return 0; }
