#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string maxi = "", mini = "";
        string nu = to_string(num);

        char inx = 0;
        for (char it : nu) {
            if (it != '9') {
                inx = it;
                break;
            }
        }

        for (char it : nu) {
            if (it == inx) {
                maxi += '9';
            } else {
                maxi += it;
            }
        }

        char ch = nu[0];
        for (char it : nu) {
            if (it == ch) {
                mini += '0';
            } else {
                mini += it;
            }
        }

        return stoi(maxi) - stoi(mini);
    }
};

int main(){
    return 0;
}
