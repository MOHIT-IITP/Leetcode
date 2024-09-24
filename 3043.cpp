#include<bits/stdc++.h>
using namespace std;

int longestCommonPrefix(vector<int> & arr1 , vector<int> & arr2){
    unordered_set<int> st;
    for(int elem : arr1){
        while(elem > 0 && !st.count(elem)){
            st.insert(elem);
            elem /= 10;
        }
    }

    int res = 0;
    for(int it : arr2 ){
        while(it > 0 && !st.count(it)){
            it /= 10;
        }
        if(it > 0){
            res = max(res, it.length());
        }
    }
    return res;
}

int main(){
    return 0;
}
