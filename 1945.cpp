class Solution {
public:
  int getLucky(string s, int k){
    string ans = "";
    for(auto c : s){
      int value = c - 'a' + 1;
      ans += to_string(value);
    }
    while(k>0){
      int res = 0;
      for(char digit : ans){
        res += digit - '0';
      }
      k--;
      ans = to_string(res);
    }
    return stoi(ans);
  }

}

int main(){
  return 0;
}
