class Solution {
    public: 
        int countSymmetricIntegers(int low, int high){
            int count = 0;
            for(int i = low; i <= high; i++){

                string num = to_string(i);
                int n = i.length();

                if(n%2==0){
                    int half = n/2;
                    int firsthalf = 0, secondhalf = 0;

                    for(int i =0;i<=half;i++){
                        firsthalf += num[i]-'0';
                    }
                    for(int i =half;i<=n-1;i++){
                        secondhalf += num[i]-'0';
                    }
                    if(firsthalf == secondhalf){
                        count++;
                    }
                }
            }
            return count;
        }
};

