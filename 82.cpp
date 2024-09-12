#include<bits/stdc++.h>
using namespace std;
 
ListNode* deleteDuplicate(ListNode* head){
  if(head == nullptr){
    return head;
  }
  ListNode* ext = new ListNode(0);
  ext->next = head;
  ListNode*  prev = ext;
  ListNode* curr = head;

  while(curr!=nullptr){
    if(curr->next != nullptr && curr->val == curr->next->val){
      while(curr->next != nullptr && curr->val == curr->next->val){
        curr = curr->next;
      }
      prev->next = curr->next;
    }
    else{
      prev = prev->next;
    }
    curr = curr->next;
  }
  ListNode* temp = ext->next;
  delete ext;
  return temp;
}

int main(){
  return 0;
}
