class Solution {
public:
    int maxDiff(int num) {
        string nu = to_string(num);
        int target = 0;
        for(auto it : nu){
            if(it != '9'){
                target = it;
                break;
            }
        }
        for(auto it : nu){
            if(it == target){

            }
        }
    }
};
