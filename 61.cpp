#include<bits/stdc++.h>
using namespace std;

int getlength(ListNode* head){
  int l =0;
  ListNode* currentNode =head;
  while(currentNode!=NULL){
    currentNode=currentNode->next;
    l++;
  }
  return l;
}

ListNode* rotateRight(ListNode* head, int k){
  if(!head || k==0){
    return head;
  }
  int size = getlength(head);
  k = k%size;
  if(k==0){
    return head;
  }
  ListNode* last = head;
  for(int i =0;i<size;i++){
    last = last->next;
  }
  last->next = head;
  ListNode* newTail = head;
  for(int i =0;i<size-k-1;i++){
    newTail = newTail->next;
  }
  // making the new head after the rotation
  ListNode* newhead = newTail->next;
  newTail->next = NULL;
  return newhead;
}

int main()
{
  return 0;
}
