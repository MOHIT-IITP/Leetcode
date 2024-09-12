#include<bits/stdc++.h>
using namespace std;

ListNode* addTwoNumber(ListNode* l1, ListNode* l2){
    vector<int> vec1;
    vector<int> vec2;
    ListNode* current1 = l1;
    ListNode* current2 = l2;
    while(current1 != NULL){
        vec1.push_back(l1->val);
        l1=l1->next;
    }
    while(current2 != NULL){
        vec2.push_back(l2->val);
        l2=l2->next;
    }
    reverse(vec1.begin(), vec1.end());
    reverse(vec2.begin(), vec2.end());
    
    string first = "";
    string second = "";
    for(auto it: vec1){
        first+=to_string(it);
    }
    for(auto it: vec2){
        second+=to_string(it);
    }
    
    long long fi = stoll(first);
    long long se = stoll(second);
    long long res = fi+se;
    string s = to_string(res);
    int size = s.size();
    
    ListNode* start = new ListNode(s[0]-'0');
    ListNode* curr = start;
    
    for(int i= 1;i<size;i++){
        curr->next = new ListNode(s[i]-'0');
        curr = curr->next;
    }
    return start;
    
    
}

int main()
{
    return 0;
}
