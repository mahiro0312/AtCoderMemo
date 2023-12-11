#include <iostream>
using namespace std;

int main(){
    int N;
    long long A[250010];
    long P[250010];

    cin >> N;
    for(int i=1;i<=N;i++) cin >> A[i];

    for(int i=2;i<=N;i++) cin >> P[i];

    int sum = 0;

    for(int i=1;i<=N;i++){
        sum += A[i];
    }

    if(sum > 0){
        cout << '+';
    }else if(sum < 0){
        cout << '-';
    }else{
        cout << '0';
    }
    cout << endl;

    return 0;
}