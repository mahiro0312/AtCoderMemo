#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int a, b, d;
    cin >> a >> b >> d;

    while(a <= b){
        cout << a;
        a += d;
    }
    cout << endl;
    return 0;
}