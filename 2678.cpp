// working code
using namespace std;

int countSeniors(vector<string>& details){
  int count=0;
  for(auto it: details){
    if(stoi(it.substr(11,2))>60){
      count++;
    }
  }
  return count;
}


int main(){
  vector<string> a({"123455M"});
  countSeniors(a);
  return 0;
}
