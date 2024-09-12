#include<bits/stdc++.h>
using namespace std;

bool checkTwoChessBoards(string coordinate1, string coordinate2){
  int color1 = (coordinate1[0] - 'a'+1 + coordinate1[1]-'0') %2;
  int color2 = (coordinate2[0] - 'a'+1 + coordinate2[1]-'0') %2;
  return color1 == color2;
}

int main(){
  return 0;
}
