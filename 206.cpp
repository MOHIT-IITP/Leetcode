#include<bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head){
  ListNode* temp=head;
  ListNode* prev=NULL;
  while(temp!= NULL){
    ListNode* front = temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
  }
  return prev;
}

int main()
{
  return 0;
}
