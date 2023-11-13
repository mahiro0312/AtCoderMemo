#include <iostream>
using namespace std;
int n, q;
static const int Q_MAX = 300000;


//配列数のサイズは最大数+1を設定
char s[300001];
int a[Q_MAX], b[Q_MAX];
int main(void)
{
    //質問の数を取得
  cin >> n >> q;

    //文字列を取得
  for(int i = 1; i <= n; i++) cin >> s[i];
  
  //範囲指定する前にSで同じ文字が隣り合う箇所に1を入れる
  for(int i = 1; i <= n-1; i++) if(s[i] == s[i+1]) a[i] = 1;

  //b[n-1]はSで隣り合う箇所の合計数になる
  for(int i = 1; i <= n-1; i++) b[i] = b[i-1] + a[i];
  
  int l, r;
  for(int i = 1; i <= q; i++){

    //読み取り
    cin >> l >> r;

    //rでの合計からlでの合計を引いてもとまる
    cout << b[r-1]-b[l-1] << "\n";
  }
  
  return 0;
}