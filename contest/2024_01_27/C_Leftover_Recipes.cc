#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i, n) cin >> q[i];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    int ans = 0;
    for(int x = 0;; x++) { //xはAの個数
        vector<int> r(n); //材料QiからAiを引いたグラム r(n)
        rep(i, n) r[i] = q[i] - a[i]*x;
        bool ok = true;
        rep(i, n) if(r[i] < 0) ok = false;
        if(!ok) break;

        int y = 1001001001; //Bの個数
        rep(i, n) {
            if(b[i] == 0) continue; //割る0はできないので飛ばす
            y = min(y, r[i]/b[i]);
        }
        ans = max(ans, x+y);
    }

    cout << ans << endl;
    return 0;
}