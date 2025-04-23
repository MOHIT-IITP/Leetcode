class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int maxi = 0;
        int count = 0;
        for(int i =1;i<=n;i++){
            int sum = 0;
            int x  = i;
            while(x > 0){
                sum += x % 10;
                x /= 10;
            }
            mp[sum]++;
            maxi = max(maxi, mp[sum]);
        }
        for(auto const & it: mp){
            if(it.second == maxi){
                count++;
            }
        }
        return count;
    }

};

