#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    int N, K, A[K];
    int sum = 0, L = 0, i;

    cin >> N >> K;
    //log
    //cout << N << K << endl;

    for(int i=0;i<=K-1;i++) cin >> A[i];

    //log
    for(int i=0;i<=K-1;i++){
        cout << "Aの要素" << A[i];
    }
    cout << endl;

    //Kが1の時点でかけた靴下はくみを作らない
    //0を出力して終了
    if(K == 1){
        cout << 0 << endl;

        return 0;
    }

    //2枚の奇妙さを計算したら２枚進む
    for(i=0;i<=K-1;i+=2){
        if(K%2 == 1 && i == K-1){
            break;
        }
        if(i == 0){
            L = A[1] - A[0];
        }else if(i >= 2){
            L = max(L, A[i+1] - A[i-1]);
        }

        //log
        cout << "A[i+1] - A[i] =" << A[i+1] - A[i] << endl;

        sum += A[i+1] - A[i];

        
        
        //log
        // cout << sum;
    }

    if(K%2 == 1){

        if(L > A[i] - A[i-1]){
            //log
            cout << "sum" << sum << "L" << L << "A[i] - A[i-1]" << A[i] - A[i-1] << endl;

            sum = sum - L + (A[i] - A[i-1]);
        }
    }
    //log
    // cout << endl;

    cout << sum << endl;

    return 0;
}