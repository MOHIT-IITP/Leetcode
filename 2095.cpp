#include<bits/stdc++.h>
using namespace std;

/*question is to delete the middle node of the linked list*/

ListNode* deleteMiddle(ListNode* head){
  if(head != NULL || head->next != NULL){
    return NULL;
  }
  ListNode* fast = head;
  ListNode* slow = head;
  ListNode* prev = NULL;
  while(fast!= NULL && fast->next != NULL){
    fast = fast->next->next;
    prev = slow;
    slow = slow->next;
  }
  if(prev!=NULL){
    prev->next = slow->next;
  }
  /*clearing the memory cache*/
  delete slow;
  return head;
}

int main()
{
  return 0;
}
