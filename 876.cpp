#include<bits/stdc++.h>
using namespace std;

/*creating two node fast and slow , the fast goes two node at a time while slow goes only one */
ListNode* middleNode(ListNode* head){
  ListNode* fast = head;
  ListNode* slow = head;
  while(fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
      fast =fast->next;
      slow =slow->next;
    }
  }
  return slow;
}

int main()
{
  return 0;     
}
