#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int> & cardPoints, int k ){
  int n = cardPoints.size();
  int m = n-k;
  int sum = accumulate(cardPoints.begin() , cardPoints.end(), 0);
  if(m == sum) return sum;

  int left = 0;
  int right = 0;
  int maxSum = 0;
  int currSum = 0;
  while(right < n){
    currSum += cardPoints[right];

    if(right - left + 1 >= m){
      maxSum = max(currSum , maxSum);
      currSum -= cardPoints[left];
      left++;
    }
    right++;
  }
  return maxSum;
}

int main(){
  return 0;
}
