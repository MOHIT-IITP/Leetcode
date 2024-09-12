#Include<bits/stdc++.h>
using namespace std;

ListNode* mergeKLists(vector<ListNode*> & Lists){
  priority_queue<ListNode*, vector<ListNode*>, Compare> hp;
  ListNode* dummy = new ListNode(0);
  ListNode* current = dummy;

  for(ListNode* ls : Lists){
    if(ls){
      hp.push(ls);
    }
  }
  while(!hp.empty()){
    ListNode* minNode = hp.top();
    hp.pop();

    // adding the min node to the new created ll
    current->next = minNode;
    current = current->next;
    // adding the next node to the heap 
    if(current->next){
      hp.push(current->next);
    }
  }
  return current->next;
}

int main(){
  return 0;
}
