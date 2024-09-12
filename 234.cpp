#include<bits/stdc++.h>
using namespace std;


void ispalindrome(ListNode* head){
  vector<int> v;
  ListNode* currentNode= head;
  while(head->next != NULL){
    v.push_back(currentNode->val);
  }
  int left = 0;
  int right = v.size()-1;
  while(left<right){
    if(v[left]!=v[right]){
      return false;
    }
  }
  return true;
}

int main()
{
  return 0;
}
