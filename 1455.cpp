#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int isPrefixOfWord(string sentence, string searchWord){
            stringstream s(sentence);
            string word;
            int count = 1;
            int n = searchWord.size();
            while(s >> word){
                if(word.substr(0, n)== searchWord){
                    return count;
                }
                count++;
            }
            return -1;
        }
}

int main(){
    return 0;
}
