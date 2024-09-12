#include<bits/stdc++.h>
using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n){
  if(head==NULL || head->next == NULL){
    return NULL;
  }
  int count = 0;
  ListNode* currentNode = head;
  while(currentNode != NULL){
    count++;
    currentNode = currentNode->next;
  }
  int res = count-n;
  int final = 0;
  ListNode* temp = head;
  ListNode* prev = NULL;
  if(res == 0){
    head = head->next;
  }
  while(res!=final){
    prev = temp;
    temp = temp->next;
    final++;
  }
  if(prev!=NULL){
    prev->next = temp->next;
  }else{
  head = temp->next;
  }
  return head;
  
}

int main(){
  return 0;
}
