#include<bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet {
public:
    int curr;
    set<int> s;
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if(s.size()){
            int res = *s.begin();
            s.erase(res);
            return res;
        }else{
            curr++;
            return curr-1;
        }
    }
    
    void addBack(int num) {
        if(curr>num) s.insert(num);
    }
};

int main(){
    return 0;
}
