#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());//文字列の要素の順を逆にする 123→321
    return s == t; //元と同じであれば回文数
}

int main(){
    long long n;
    cin >> n;
    long long ans = 0;

    for(long long i = 1; i*i*i <= n; i++){ //Kの先頭は0以外→1スタート
        //回文だったとき
        if(check(i*i*i)){
            ans = i*i*i;
        }
    }
    cout << ans << endl;
    return 0;
}