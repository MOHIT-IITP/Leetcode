class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> mp;

      for(auto it : strs){
        string temp = it; // eat
        sort(temp.begin(), temp.end()); // aet
        mp[temp].push_back(it); // push back in original in mp
      }

      vector<vector<string>> vec;
      for(auto [first, second]: mp){
        vec.push_back(second);
      }
      return vec;
    }
};



// eat , tea , tan , ate , nat , bat 

// eat , tea, ate
// tan , nat 
// bat 
