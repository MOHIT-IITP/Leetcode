#include<bits/std++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";

        string pre = strs[0];
        int preLen = pre.size();
        for(int i = 0 ; i < strs.size() ; i++){
            string  curr = strs[i];
            while(preLen > curr.length() || pre != curr.substr(0, preLen)){
                preLen--;
                if(preLen == 0){
                    return "";
                }
                pre = pre.substr(0, preLen);
            }
        }
        return pre;
    }
};

int main(){
    return 0;
}
