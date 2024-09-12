#include<bist/stdc++.h>
using namespace std;

ListNode* getmiddle(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;
  while(fast!= NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}

ListNode* reverse(ListNode* head){
  ListNode* prev = NULL;
  ListNode* currentNode = head;
  while(currentNode!= NULL){
    ListNode* front = currentNode->next;
    currentNode->next = prev;
    prev = currentNode;
    currentNode = front;
  }
  return prev;
}


bool ispalindrome(ListNode* head){
  ListNode* middle = getmiddle(head);
  ListNode* secondhalf = reverse(middle);
  ListNode* secondstart = secondhalf;
  ListNode* firststart = head;
  while(secondstart!= NULL){
    if(secondstart->val != firststart->val){
      return false;
    }
    secondstart =secondstart->next;
    firststart = firststart->next;
  }
  return true;

}

int main()
{
  return 0;
}
