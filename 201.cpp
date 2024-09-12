#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
        if (left == 0 || right == 0) {
            return 0;
        }
        
        int shift = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        
        return left << shift;
    }
};

int main()
{
  return 0;
}
