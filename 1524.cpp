#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd = 0, even = 1; // Start with even = 1 for the empty prefix case
        int sum = 0, count = 0;

        for (int num : arr) {
            sum = (sum + num) % 2;  // Keep only parity (0 or 1)

            if (sum == 0) {
                count = (count + odd) % MOD;
                even++;
            } else {
                count = (count + even) % MOD;
                odd++;
            }
        }

        return count;
    }
};
int main(){
    return 0;
}
