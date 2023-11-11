#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
static const int MAX = 200000;

//for for maxvとR[j]とR[i]の大きい方とするとO(n^2)となり計算量が膨大になる
int main(){
    int n;
    int R[MAX];
    cin >> n;
    for(int i=0;i<n;i++) cin >> R[i];

    int minv = R[0];
    int maxv = -2000000000; //十分小さい値を想定
    for(int j=1;j<n-1;j++){

        //     max(最大値,現在の最小値との差)
        maxv = max(maxv , R[j] - minv    ); //今までの最大差と、今いる位置とminv(一番低いところ)の差を比べて更新

        //     min(最小値,  現在の値)
        minv = min(minv ,  R[j]   ); //最小値の更新
    }

    cout << maxv << endl;

    return 0; 
}