#include <iostream>
using namespace std;

int main(){
    //P円の商品をQ個
    int N, S, K, P[10010], Q[101];

    cin >> N >> S >> K;
    for(int i=1;i<=N;i++){
        cin >> P[i] >> Q[i];
    }

    int sum = 0;

    for(int i=1;i<=N;i++){
        sum += P[i] * Q[i];
    }

    //合計金額がS円以上なら送料無料 S円未満なら+K円
    if(sum >= S){
        sum += 0;
    }else {
        sum += K;
    }

    cout << sum << endl;

    return 0;
}