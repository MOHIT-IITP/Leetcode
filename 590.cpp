#include<bits/stdc++.h>
using namespace std;

vector<int> postorder(Node* root)
{
  if(!root) return {};
  vector<int> res;
  function<void(Node*)> dfs = [&](Node* node){
    for(Node* child: node->children){
      dfs(child);
    }
    res.push_back(node->val);
  };
  dfs(root);
  return res;
}

int main(){
  return 0;
}

