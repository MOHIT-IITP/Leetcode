#include<bits/stdc++.h>

using namespace std;

class MyStack{
  public:
    queue<int> q1;
    queue<int> q2;
    
    MyStack(){}

    void push(int x){
      q2.push(x);
      while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
      swap(q1,q2);
      }
    }

    void pop(int x){
      int temp = q1.front();
      q1.pop();
      return temp;
    }

    void top(){
      return q1.front();
    }
    bool empty(){
      return q.empty();
    }
}

int main()
{
  return 0;
}
