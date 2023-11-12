#include <iostream>
using namespace std;

int main(){
    int N, X;
    int sum = 0;
    cin >> N;
    cin >> X;
    
    int S[N];
    for(int i=0;i<N;i++) cin >> S[i];

    for(int j=0;j<N;j++){
        if(S[j] <= X){
            sum += S[j];
        }
    }

    cout << sum << endl;
    
    return 0;
}