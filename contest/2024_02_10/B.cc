#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> a(n), qi(n), qn(n); //数列A, クエリのインデクス, クエリないの値
    
    rep(i, n) cin >> qi[i] >> qn[i];

    rep(i, n){
        if(qi[i] == 1){
            a.push_back(qn[i]);
        }else{
            cout << a[a.size() - qn[i]] << endl;
        }
    }
    return 0;
}