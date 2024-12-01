#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for(auto it : arr){
            if(st.count(2*it) || (it % 2 ==0 && st.count( it / 2))){
                return true;
            }
            st.insert(it);
        }
        return false;
    }
}
int main(){
    return 0;
}
