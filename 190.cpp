#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
       unsigned int ans = 0;
       for(int i =0;i<=31;i++){
            ans=(ans<<1)|((n>>i)&1);
       }
       return ans;
    }
};

int main(){
  return 0;
}

