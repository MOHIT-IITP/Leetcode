#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N;  
        vector<int> A(N);
        
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        
        sort(A.begin(), A.end(), greater<int>());
        
        long long tc = 0;
        
        
        for (int i = 0; i < N; ++i) {
            int dp = A[i] - i;
            
            tc += dp;
        }
        cout << tc << endl;
    }
}

int main() {
    
    
    solve();  
    
    return 0;
}

