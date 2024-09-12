#include<bits/stdc++.h>
using namespace std;

bool hascycle(ListNode *head){
  ListNode* second = head;
  ListNode* first = head;
  while(second !=nullptr && second -> next != nullptr){
    second = second->next->next;
    first = first->next;
    if(second == first){
      return true;
    }
  }
  return false;
  
}

int main(){
  return 0;
}
