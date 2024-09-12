#include<bits/stdc++.h>
using namespace std;

class KthLargest {
private: 
    priority_queue<int, vector<int>, greater<int>> p;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for( int num: nums){
            add(num);
        }
    }
    
    int add(int val) {
        if(p.size()<k || p.top() < val){
            p.push(val);
            if(p.size()>k){
                p.pop();
            }
        }
        return p.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main(){
  return 0;
}
