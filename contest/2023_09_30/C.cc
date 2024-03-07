#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m) {
        cin >> a[i];
        a[i]--;
    }
    vector<int> b(n);
    rep(i, m) b[a[i]] = 1;

    vector<int> ans(n);

    //最終日(n日目)からスタート
    for(int i=n-1;i>=0;i--){
        if(b[i]){
            ans[i] = 0;
        }else{ //もしi日目が0でないならi+1日目の答えの+1をする
            ans[i] = ans[i+1] + 1;
        }
    }
    rep(i, n) cout << ans[i] << endl;

    // rep(i, n){
    //     if(a.at(0) == i){
    //         cout << 0 << endl;
    //         a.erase(0);
    //     }else if(a.at(0) < i){
    //         a.erase(0);
    //         cout << a.at(0) - i << endl;
    //     }else{
    //         cout << a.at(0) - i << endl;
    //     }
    // }


    
    return 0;
}