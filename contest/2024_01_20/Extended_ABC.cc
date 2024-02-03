#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    char preState = S.at(0);
    bool isP = true;
    
    for(int i=1; i<S.size(); i++){
        if(S.at(i-1) > S.at(i)) isP = false;
    }

    if(isP){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;

}