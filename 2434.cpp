#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string robotWithString(string s) {
        string p = "";
        stack<char> t;
        int n = s.size();
        
        vector<char> minChar(n);
        minChar[n - 1] = s[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            minChar[i] = min(s[i], minChar[i + 1]);
        }

        int idx = 0;
        while (idx < n) {
            t.push(s[idx]);

            // Pop from stack if top is <= smallest char left in the string
            while (!t.empty() && t.top() <= minChar[idx + 1 < n ? idx + 1 : n - 1]) {
                p += t.top();
                t.pop();
            }
            ++idx;
        }

        // Pop remaining chars from the stack
        while (!t.empty()) {
            p += t.top();
            t.pop();
        }

        return p;
    }
};

int main(){
    return 0;
}
