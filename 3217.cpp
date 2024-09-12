#include<bits/stdc++.h>
using namespace std;
// not able to iterate throughout the linked list

ListNode* modifiedList(vector<int> & nums, ListNode* head){
  ListNode* dummy = new Listnode();
  ListNode* mover = dummy;
  ListNode* temp = head;
  set<int> s;
  for(auto it: nums){
    s.insert(it);
  }
  while(temp){
    if(s.find(temp->val)== s.end()){
      mover -> next = temp; 
      mover = mover -> next;
    }
    temp = temp -> next;
  }
  mover -> next = nullptr;
  return dummy->next;
}

int main(){
  return 0;
}
