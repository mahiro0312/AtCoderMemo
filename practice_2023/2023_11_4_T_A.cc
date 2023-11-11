#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N;
  cin >> S;
  bool exist = false;
  for(int i=0;i<N-1;i++){
    if((S[i]=='a' && S[i+1]=='b')||(S[i]=='b' && S[i+1]=='a')){
      exist = true;
    }
  }
  if(exist){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}