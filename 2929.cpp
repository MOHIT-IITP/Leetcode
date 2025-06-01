class Solution{
    public: 
        long long districbuteCandies(int n, int limit){
            long long ways = 0;
            int minch1 = max(0, n-2*limit);
            int maxch1 = min(n, limit);

            for(int i =minch1;i<=maxch1;i++){

                int N = n-i;

                int minch2 = max(0, N-limit);
                int maxch2 = min(N, limit);

                ways += maxch2 - minch2 + 1; 

            }
            return ways;
        }
}

int main(){
    return 0;
}
