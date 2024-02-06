#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;

    long A[n];
    rep(i, n) cin >> A[i];

    //log
    rep(i, n) cout << A[i];
    cout << endl;

    long p = 0; //乗客数 マイナスあり
    long minp = 0;//一番少ない乗客数
    for(int i=n-1;i>=0;i--){
        p += -(A[i]);
        if(minp > p){
            minp = p;
        }
        cout << minp << endl;
    }

    cout << -(minp) << endl;
    return 0;
}