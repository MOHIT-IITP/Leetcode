class Solution{
    public:
        int largestCombination(vector<int> & candidates){
            int maxC = 0;
            for(int i=0;i<32;i++){
                int count =0;
                for(int num : candidates){
                    if((num & (1 << i)) != 0 ){
                        count++;
                    }
                }
                maxC = max(maxC, count);
            }
            return maxC;
        }
}
