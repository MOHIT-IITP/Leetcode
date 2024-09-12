#include<bits/stdc++.h>
using namespace std;

ListNode* deleteAllOccurofX(ListNode* head, int x){
  ListNode* a = head;
  while(a!=NULL){
    if(a->val==x){
      a->prev->next = a->next;
      a->next->prev =a->prev;
      a=a->next;
    }
    a=a->next;
  }
  return head;
}
int main()
{
  return 0;
}
