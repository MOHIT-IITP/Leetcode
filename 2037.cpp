#include<bits/stdc++.h>

using namespace std;

int minMovesToseat(vector<int> & seats,vector<int>& students){
  sort(seats.begin(),seats.end());
  sort(students.begin(),students.end());
  int count=0;
  for(int i=0;i<seats.size();i++){
    count += abs(seats[i]-students[i]);
  }
  return count;
}

int main()
{
  vector<int> seats({3,1,5});
  vector<int> students({2,7,4});
  int res = minMovesToseat(seats, students);
  cout<<res;
  return 0;
}
