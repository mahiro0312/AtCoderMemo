#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
  double B;
  cin >> B;
  int sm = -1;
  for(int i=1;i<16;i++){
    if(pow(i, i) == B){
      sm = i;
    } 
  }
  cout << sm << endl;
    
  return 0;
}