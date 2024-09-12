#include<bits/stdc++.h>
using namespace std;

int res(ListNode* head){
  int ans=0;
  ListNode* temp;
  while(temp!=NULL){
    ans*=2;
    ans+=temp->val;
    temp=temp->next;
  }
  return ans;
}

int main()
{
  return 0;
}
