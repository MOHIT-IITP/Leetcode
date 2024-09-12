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
private:
  int gcd(int a, int b) { // function to find gcd
    if (b == 0)
      return a;
    return gcd(b, a % b);
  }

public:
  ListNode *insertGreatestCommonDivisors(ListNode *head) {
    ListNode *curr = head;
    ListNode *first = head;
    while (curr->next != nullptr) {
      int x = gcd(curr->val, curr->next->val);
      ListNode *temp = new ListNode(x);
      first = first->next;
      curr->next = temp;
      temp->next = first;

      curr = first;
    }
    return head;
    // gcd -> next  = curr -> next
    // curr -> next = gcd -> next = curr -> next
  }
};
int main() { return 0; }
