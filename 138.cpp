#include<bits/stdc++.h>
using namespace std;

/*// the question was to clone the linked list with next and random address in it*/
Node* copyRandomList(Node* head){
  unordered_map<Node*, Node*> mp;
  Node* current = head;
  while(current){
    mp[current] = new Node(current->val);
    current = current->next;
  }
  current = head;
  while(current){
    mp[current]->next = mp[current->next];
    mp[current]->random = mp[current->random];
    current = current->next;
  }
  return mp[head];
}

int main()
{
  return 0;
}
