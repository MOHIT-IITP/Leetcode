
// brute force approach
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n  = tops.size();
        int x = 2 * n;
        vector<int> vec(x, -1);
        for(auto t : tops){
            vec[t]++;
        }
        int target = 0;
        int maxi = INT_MIN;
        for(int v = 1;v<vec.size();v++){
            if(vec[v] > maxi ){
                maxi = max(maxi , vec[v]);
                target = v;
            }
        }
        
        // write the vector selection algo here mohit kumar
        
        int first = 0 , second = 0;
        for(auto t : tops){
            if(t == target){
                first++;
            }
        }
        for(auto b: bottoms){
            if(b == target) {
                second++;
            }
        }

        vector<int> firstvec(n), secondvec(n);

        if(first > second){
            for(int i =0;i<n;i++){
                firstvec[i] = tops[i];
                secondvec[i] = bottoms[i];
            }
        }else {
            for(int i =0;i<n;i++){
                secondvec[i] = tops[i];
                firstvec[i] = bottoms[i];
            }
        }
        

        int count = 0;
        for(int i = 0 ; i < firstvec.size() ; i++ ){
            if(firstvec[i] != target && secondvec[i] == target){
                count++;
            }else if(firstvec[i] != target && secondvec[i] != target){
                return -1;
            }
        }
        return count;
    }
};



// optimised code


class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        // Check both tops[0] and bottoms[0] as possible values
        return helper(tops[0], tops, bottoms, n) != -1
            ? helper(tops[0], tops, bottoms, n)
            : helper(bottoms[0], tops, bottoms, n);
    }

private:
    int helper(int target, vector<int>& tops, vector<int>& bottoms, int n) {
        int topRotations = 0, bottomRotations = 0;

        for (int i = 0; i < n; ++i) {
            if (tops[i] != target && bottoms[i] != target)
                return -1;

            if (tops[i] != target)
                topRotations++;
            if (bottoms[i] != target)
                bottomRotations++;
        }

        return min(topRotations, bottomRotations);
    }
};

