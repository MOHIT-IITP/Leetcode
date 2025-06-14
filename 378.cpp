#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vec;
        for (auto& row : matrix) {
            for (int num : row) {
                vec.push_back(num);
            }
        }
        sort(vec.begin(), vec.end());
        return vec[k - 1];
    }
};

int main(){
    return 0;
}
