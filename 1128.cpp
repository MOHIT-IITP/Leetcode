class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(dominoes[i][1] == dominoes[j][1] && dominoes[i][0] == dominoes[j][0]){
                    count++;
                }
                else if(dominoes[i][1] == dominoes[j][0] && dominoes[i][0] == dominoes[j][1]){
                    count++;
                }
            }
        }
        return count;
    }
};

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        vector<string> vec(n);
        for(int i = 0 ;i<n; i++){
            string s = "";

            if(dominoes[i][0] < dominoes[i][1]){
                s += dominoes[i][0];
                s += dominoes[i][1];
            }else{
                s += dominoes[i][1];
                s += dominoes[i][0];:wq

            }

            vec[i] = s;
        }
        unordered_map<string, int> mp;
        for(auto it : vec){
            mp[it]++;
        }


    }
}
