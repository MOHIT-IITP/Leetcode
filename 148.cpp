#include<bits/stdc++.h>
using namespace std;

ListNode* sortList(ListNode* head){
  vector<int> vec;
  ListNode* temp = head;
  while(temp!=NULL){
    vec.push_back(temp->val);
    temp = temp->next;
  }
  sort(vec.begin(), vec.end());
  int count = 0;
  ListNode* currentNode = head;
  while(currentNode != NULL){
    currentNode -> val = vec[count];
    count++;
    currentNode = currentNode->next;
  }
  return head;
}
int main()
{
  return 0;
}
