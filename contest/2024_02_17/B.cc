#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    long A[n];
    rep(i, n) cin >> A[i];
    long S[n-1], T[n-1];
    rep(i, n-1) cin >> S[i] >> T[i];

    rep(i, n-1){
        if(A[i] >= S[i]){
            long d = A[i]/S[i];
            A[i+1] = A[i+1]+T[i]*d;
        }
    }
    cout << A[n-1] << endl;
    return 0;
}