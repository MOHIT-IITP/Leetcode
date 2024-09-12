#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  vector<ListNode *> splitListToParts(ListNode *head, int k) {
    // Calculate the length of the linked list
    int length = 0;
    ListNode *temp = head;
    while (temp != nullptr) {
      length++;
      temp = temp->next;
    }

    // Determine the size of each part and the number of longer parts
    int partSize = length / k;
    int extraNodes = length % k;

    // Result vector to store the parts
    vector<ListNode *> result(k, nullptr);
    ListNode *curr = head;
    ListNode *prev = nullptr;

    for (int i = 0; i < k; ++i) {
      if (curr == nullptr) {
        break;
      }
      result[i] = curr; // Start of the current part

      // Determine the current part size
      int currentPartSize = partSize + (extraNodes > 0 ? 1 : 0);
      extraNodes--;

      // Traverse the current part and disconnect it from the next part
      for (int j = 0; j < currentPartSize; ++j) {
        prev = curr;
        curr = curr->next;
      }

      // Disconnect the current part from the next
      if (prev != nullptr) {
        prev->next = nullptr;
      }
    }

    return result;
  }
};

int main() { return 0; }
