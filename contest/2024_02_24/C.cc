#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;

    //変換前と変換後の文字列
    string from, to;

    //全てのアルファベットが入る文字列で初期化
    from = to = "abcdefghijklmnopqrstuvwxyz";

    rep(i, q){
        char c, d;
        cin >> c >> d;
        for(auto &&m : to)
        if(m == c) m = d; //cがあったらdに変換
    }

    for(const auto c : s){
        rep(i, 26){
            if(c == from[i]) cout << to[i];//変換前の文字から変換後の文字を求める
        }
    }

    return 0;
}