
class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> left(n, -1), right(n, -1);

        
        int lastRight = -1;
        for (int i = 0; i < n; i++) {
            if (dominoes[i] == 'R') {
                lastRight = i;
            } else if (dominoes[i] == 'L') {
                lastRight = -1;
            } else if (lastRight != -1) {
                right[i] = i - lastRight;
            }
        }

        
        int lastLeft = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (dominoes[i] == 'L') {
                lastLeft = i;
            } else if (dominoes[i] == 'R') {
                lastLeft = -1;
            } else if (lastLeft != -1) {
                left[i] = lastLeft - i;
            }
        }

        string result = "";
        for (int i = 0; i < n; i++) {
            if (left[i] == -1 && right[i] == -1) {
                result += dominoes[i];
            } else if (left[i] == -1) {
                result += 'R';
            } else if (right[i] == -1) {
                result += 'L';
            } else if (left[i] == right[i]) {
                result += '.';
            } else if (left[i] < right[i]) {
                result += 'L';
            } else {
                result += 'R';
            }
        }

        return result;
    }
};
