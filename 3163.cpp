#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string compressedString(string word){
            string comp= "";
            int cnt = 1, n = word.size();
            char ch = word[0];
            for(int i = 1;i<n;i++){
                if(word[i] == ch && cnt < 9) cnt++;
                else{
                    comp.push_back(cnt+'0');
                    comp.push_back(ch);
                    ch = word[1];
                    cnt = 1;
                }
            }
            comp.push_back(cnt + '0');
            comp.push_back(ch);
            return comp;

        }
}
int main(){
    return 0;
}
