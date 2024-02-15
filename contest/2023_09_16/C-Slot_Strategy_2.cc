#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int m;
    cin >> m;
    vector<string> s(3);
    rep(i, 3) cin >> s[i];

    const int INF = 1001001001;
    int ans = INF;

    rep(t0, 300) rep(t1, 300) rep(t2, 300) { 
        /*同時には押せないので同時刻は除外*/
        if(t0 == t1) continue;
        if(t0 == t2) continue;
        if(t1 == t2) continue;

        /*揃っていないのは除外*/
        if(s[0][t0%m] != s[1][t1%m]) continue;
        if(s[0][t0%m] != s[1][t2%m]) continue;

        /*t0, t1, t2の中で一番大きい数字が、より小さけれな更新する*/
        ans min(ans, max({t0, t1, t2}));
    }
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}