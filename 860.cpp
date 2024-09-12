#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int five = 0; 
       int ten = 0;
       for(auto it : bills){
        if(it==5){
            five++;
        }
        else if (it == 10){
            if(five>0){
                five--;
                ten++;
            }
            else{
                return false;
            }
        }
        else if(it == 20){
            if(five>0 & ten >0){
                ten--;
                five--;
            }
            else if(five>=3){
                five-=3;
            }
            else{
                return false;
            }
            
        }
       }
       return true;
    }
};

int main(){
  return 0;
}
