#include <iostream>
using namespace std;

//スタックを用いる。下からABCになったら消す
int main(void)
{

  string s, ans;
  //文字列の取得
  cin >> s;
  
  //範囲for文 sの先頭からループごとに１文字ずつcに取り出す
  for(auto c : s){
    ans += c;

    //もし文字数が3以上でABCであったら              
    if(ans.size() >= 3 && ans.substr(ans.size()-3) == "ABC") {

        //ABCの部分だけ消去 erase()
        ans.erase(ans.end()-3, ans.end());
    }
  cout << ans << endl;
  
  return 0;
}