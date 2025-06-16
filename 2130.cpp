/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<bits/std.c++.h>
using namespace std;

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *temp = head;
        vector<int> vec;
        while(temp != nullptr){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int n = vec.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] += vec[i];
            int x = n - 1 - i;
            ans[x] += vec[i]; 
        }
        int maxi = INT_MIN;
        for(auto it : ans){
            maxi = max(maxi , it);
        }
        return maxi;
    }
};
int main(){
    return 0;
}
