class Solution {
public:
    int countOfSubstrings(string word, int k) {
        unordered_set<char> v = {'a','e','i','o','u'};
        int n = word.length();
        int count = 0;
        for(int i=0;i<n;i++){
            unordered_set<char> fv;
            int cons = 0;
            for(int j = i;j<n;j++){
                char c = word[j];
                if(v.count(c)){
                    fv.insert(c);

                }else{
                    cons++;
                }
                if(fv.size() == 5 && cons == k){
                    count++;
                }
                if(cons > k){
                    break;
                }
            }
        }
        return count;
    }
};
