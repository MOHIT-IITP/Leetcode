#include<bits/stdc++.h>
using namespace std;

int getLength(ListNode* head){
    ListNode* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp =temp->next;
        len++;
    }
    return len;
}
ListNode* reverseKGroup(ListNode* head, int k){
    if(head==NULL || head->next== NULL){
        return head;
    }
    int len = getlength(head);
    if(len<k){
        return head;
    }
    int pos = 0;
    ListNode* currentNode = head;
    ListNode* prev = NULL;
    while(pos<k){
        ListNode *front = currentNode->next;
        currentNode->next = prev;
        prev = currentNode;
        currentNode = front;
        pos++;
    }
    if(currentNode!=NULL){
        ListNode* fronthead = reverseKGroup(currentNode,k);
        head->next = fronthead;
    }
    return prev;
}

int main()
{
    return 0;
}
