#include<bits/stdc++.h>
using namespace std;

ListNode* detectCycle(ListNode* head){
  ListNode* fast = head;
  ListNode* slow = head;
  while(fast != NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
    if(fast == slow){
      while(head!=slow){
        head=head->next;
        slow =slow->next;
      }
      return slow;
    }
  }
  return NULL;
}

int main()
{
  return 0;
}
