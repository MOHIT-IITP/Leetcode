#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int compress(vector<char> & chars){
            int n = chars.size();
            int left = 0;
            int index = 0;
            while(left < n){
                char curr = chars[left];
                int count = 0;
                while(left < n && curr = chars[left]){
                    left++;
                    count++;
                }
                chars[index++] = count;
                if(count > 1 ){
                    for(char c : to_string(count)){
                        chars[index++] = c;
                    }
                }
            }
            return index;
        }
}

int main(){
    return 0;
}
