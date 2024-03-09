#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int A, B;
    cin >> A >> B;

    int sum = A + B;
    if(sum == 0){
        sum = 9;
    }else{
        sum -= 1;
    }
    cout << sum << endl;
}