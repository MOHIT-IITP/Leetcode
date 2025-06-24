#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> vec;
        set<int> st;
        int n = nums.size();
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                int temp = abs(i-j);
                if(temp <= k && nums[j] == key){
                    st.insert(i);
                }
            }
        }
        for(auto it : st){
            vec.push_back(it);
        }
        return vec;
    }
};

int main(){
    return 0;
}
