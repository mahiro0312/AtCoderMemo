#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;

    cin >> S;

    for(int i=0;i<S.length();i++){
        char c = S[i];
        cout << c << " ";
    }

    return 0;
}