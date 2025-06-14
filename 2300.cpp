#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> result;

        for (int spell : spells) {
            int left = 0, right = m - 1, idx = m;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if ((long long)spell * potions[mid] >= success) {
                    idx = mid; 
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            result.push_back(m - idx); 
        }

        return result;
    }
};

int main (){
    return 0;
}
