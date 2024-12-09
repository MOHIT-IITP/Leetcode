#include<bits/stdc++.h>
using namespace std;
class solution {
public:
    vector<bool> isarrayspecial(vector<int>& nums,
                                vector<vector<int>>& queries) {
        const int n=nums.size();
        int prev=nums[0]&1;
        vector<int> sameparity(n, 0);
        
        for (int i = 1, j = 0; i < n; i++) {
            bool x=nums[i]&1;
            if (x==prev) j++;
            sameparity[i]=j;
            prev=x;
        }
        const int m=queries.size();
        vector<bool> ans(m, 0);
        for (int i=0; i<m; i++){
            int s=queries[i][0], t=queries[i][1];
            ans[i]=(sameparity[s]==sameparity[t]);
        }
        return ans;
    }
};
int main()
{
    return 0;
}
