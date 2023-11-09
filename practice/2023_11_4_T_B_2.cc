#include <iostream>
using namespace std;

int main() {
  
  
  long long B;//巨大整数15^15の計算なので整数(long long)で定義
  cin >> B;
  for (int A=1;A<=15;A++) {
    long long X = 1;
    for (int i=0;i<A;i++) X *= A;
    if (X == B) {
      cout << A << endl;
      
      exit(0);//終了
    }
  }
  cout << "-1" << endl;
}
