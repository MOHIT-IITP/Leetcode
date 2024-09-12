#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  ListNode *modifiedList(vector<int> &nums, ListNode *head) {
    unordered_set<int> st(nums.begin(), nums.end());
    ListNode start(0);
    ListNode *curr = start;
    ListNode *temp = head;

    while (temp != nullptr) {
      if (st.find(temp->val) == st.end()) {
        curr->next = temp;
        curr = curr->next;
      }
      temp = temp->next;
    }
  }
  curr->next = nullptr;
  return start
      .next; // we don't  declare the start as a pointer that is why we dont use
  // start ->next;
};

int main() { return 0; }
