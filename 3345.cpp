class Solution{
    public:
        int digitProduct(int num){
            int product = 1 ;
            while(num > 0){
                int digit = num % 10 ;
                if(digit==0){
                    return 0;
                }
                product *= digit;
                num /= 10;
            }
            return product;
        }
        int smallestNumber(int n, int t){
            while(true){
                if(digitProduct(n) % t==0){
                    return n;
                }
                n++;
            }
        }
}
