#include <iostream>
using namespace std;
static const int N_MAX = 100001;

int main() {
    int N, L, R, A[N_MAX], i;
    cin >> N >> L >> R;

    for(i=0;i<N;i++) cin >> A[i];
    
    for(i=0;i<N;i++){
        if(L <= A[i] && A[i] < R){
            cout << A[i] << " ";
        }else if(A[i] < L){
            cout << L << " ";
        }else {
            cout << R << " ";
        }
        if(i == N-1) cout << endl;
    }
    
    return 0;
}