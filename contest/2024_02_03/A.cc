#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    string S, b = "";
    cin >> S;
    //cout << S.length() << endl;

    for(int i=0; i<S.length(); i++){
        if(S[i] == '.'){
            if(i == S.length()-1){
                b = "";
            }else{
                b = S.substr(i+1, S.length()-i);
            }
        }
    }

    cout << b << endl;
    return 0;
}