#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
  vector<vector<int>> spiralMatrix(int m, int n, ListNode *head) {

    // pre initialize kar do
    vector<vector<int>> ans(m, vector<int>(n, -1));
    ListNode *temp = head;

    int rs = 0, re = m;
    int cs = 0, ce = n;

    while (temp != nullptr) {
      for (int i = cs; i < ce; i++) {
        if (temp != nullptr) {
          ans[rs][i] = temp->val;
          temp = temp->next;
        }
      }
      rs++;

      for (int i = rs; i < re; i++) {
        if (temp != nullptr) {
          ans[i][ce - 1] = temp->val;
          temp = temp->next;
        }
      }
      ce--;

      if (rs < re) {
        for (int i = ce - 1; i >= cs; i--) {
          if (temp != nullptr) {
            ans[re - 1][i] = temp->val;
            temp = temp->next;
          }
        }
        re--;
      }

      if (cs < ce) {
        for (int i = re - 1; i >= rs; i--) {
          if (temp != nullptr) {
            ans[i][cs] = temp->val;
            temp = temp->next;
          }
        }
        cs++;
      }
    }

    return ans;
  }
};

int main() { return 0; }
