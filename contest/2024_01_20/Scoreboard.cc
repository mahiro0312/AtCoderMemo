#include <iostream>
using namespace std;

int main(){
    int N, T, A, Tc=0, Ac=0;

    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> T >> A;
        Tc += T;
        Ac += A;
    }

    if(Tc > Ac){
        cout << "Takahashi" << endl;
    }else if(Ac > Tc){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }

    return 0;
}