class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        int maxdiag = INT_MIN;
        int maxarea = INT_MIN;

        for(auto const & it: dimensions){
            int l = it[0], w = it[1];
            int area = l * w;
            int diag = l * l + w * w;

            if(diag > maxdiag){
                maxdiag = diag;
                maxarea = area;
            }else if(diag == maxdiag){
                maxarea = max(maxarea, area);
            }
        }
        return maxarea;
        
    }
};
