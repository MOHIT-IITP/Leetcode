#include<bits/stdc++.h>
using namespace std;

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
  unordered_map<ListNode*,bool> mp;
  ListNode* a = headA;
  while(a!=NULL){
    mp[a] = true;
    a = a->next;
  }
  ListNode *b = headB;
  while(b!=NULL){
    if(mp[b] == true){
      return b;
    }
    b =b->next;
  }
  return NULL;
}

int main()
{
  return 0;
}
