#include<bits/stdc++.h>
using namespace std;

ListNode* oddEvenList(ListNode* head){
  vector<int> vec;
  if(head == NULL || head->next == NULL){
    return head;
  }

  /*taking up the odd place from the linked list and storing in the vector */

  ListNode* temp = head;
  while(temp!=NULL && temp->next != NULL){
    vec.push_back(temp->val);
    temp=temp->next->next;
  }
  if(temp){
    vec.push_back(temp->val);
  }

  /*taking up the even place from the linked list and storing in the vector */

  ListNode* temp = head->next;
  while(temp!=NULL && temp->next != NULL){
    vec.push_back(temp->val);
    temp=temp->next->next;
  }
  if(temp){
    vec.push_back(temp->val);
  }

  /*now updating the linked list value according to the vector which was made in the upper code*/
  ListNode* currentNode = head;
  int count = 0;
  while(currentNode != NULL){
    currentNode->val = vec[count];
    count++;
    currentNode = currentNode->next;
  }
  return head;
}

int main()
{
  return 0;
}

