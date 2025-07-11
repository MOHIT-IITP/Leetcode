#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string currStr = "";
        int k = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0'); 
            } else if (ch == '[') {
                counts.push(k);
                resultStack.push(currStr);
                k = 0;
                currStr = "";
            } else if (ch == ']') {
                string temp = resultStack.top(); resultStack.pop();
                int repeatTimes = counts.top(); counts.pop();
                for (int i = 0; i < repeatTimes; i++) {
                    temp += currStr;
                }
                currStr = temp;
            } else {
                currStr += ch;
            }
        }
        return currStr;
    }
};

int main({
        return 0;
    })
