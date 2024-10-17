#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maximumSwap(int num){
            int maxi = num;
            string str = to_string(num);
            for(int i=0;i<str.size();++i){
                for(int j= i+1 ;j<str.size();++j){
                    swap(str(i), str(j));
                    maxi = max(maxi, stoi(str));
                    swap(str(i), str(j));
                }
            }
            return maxi;
        }
}
int main(){
    return 0;
}
