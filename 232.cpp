/*implement queue using stack*/

class MyQueue{
public:
  stack<int> s1;
  stack<int> s2;
  void push(int x){
    s1.push(x);
  }
  int pop(){
    if(s2.empty()){
      while(!s1.empty()){
        s2.push(s1.top);
        s1.pop();
      }
    }
    int ans = s2.top();
    s2.pop();
    while(!s2.empty()){
      s1.push(s2.top());
      s2.pop();
    }
    return ans;
  }

  int peek(){
    int temp;
    while(!s1.empty()){
      temp = s1.top();
      s2.push(s1.top());
      s1.pop();
    }
    int last = temp;
    while(!s2.empty()){
      temp = s2.top();
      s1.push(temp);
      s2.pop();
    }
    return last;
  }
  bool empty(){
    return s1.empty();
  }
}
