#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    int a[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];

    rep(i, n){
        rep(j, n){
            if(a[i][j] == 1){
                cout << j+1;
            }
        }
        cout << endl;
    }
    return 0;
}