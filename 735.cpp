#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int asteroid : asteroids) {
            bool destroyed = false;
            while (!st.empty() && asteroid < 0 && st.top() > 0) {
                if (abs(st.top()) < abs(asteroid)) {
                    st.pop(); // top asteroid explodes
                    continue;
                } else if (abs(st.top()) == abs(asteroid)) {
                    st.pop(); // both explode
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // current asteroid is destroyed
                    break;
                }
            }
            if (!destroyed) {
                st.push(asteroid);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};

int main(){
    return 0;
}

