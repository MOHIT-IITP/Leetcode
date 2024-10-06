#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool areSentenceSimilar(string sen1, string sen2){
            deque<string> d1, d2;
            if(sen1.length() < sen2.length()){
                swap(sen1, sen2);
            }
            stringstream s1(sen1);
            stringstream s2(sen2);
            string word1, word2;

            while(s1 >> word1){
                d1.push_back(word1);
            }
            while(s2 >> word2){
                d2.push_back(word2);
            }

            // main part start here 
            while(!s2.empty() && s1.front() == s2.front()){
                s1.pop_front();
                s2.pop_front();
            }
            while(!s2.empty() && s2.back() == s1.back()){
                s1.pop_back();
                s2.pop_back();
            }
            return s2.empty();
        }
}

int main(){
    return 0;
}
