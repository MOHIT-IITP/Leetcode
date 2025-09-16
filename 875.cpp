class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxNum = *max_element(piles.begin(), piles.end());
        int left = 1, right = maxNum;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long count = 0;

            for (int bananas : piles) {
                count += (bananas + mid - 1) / mid;  
            }

            if (count > h) {
                left = mid + 1;  
            } else {
                right = mid - 1; 
            }
        }
        return left;
    }
};

int main(){
    return 0;
}
