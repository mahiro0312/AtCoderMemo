#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static const int M_MAX = 1000000000;

int main(){
    int N, M;
    vector<int> A;

    //読み取り
    cin >> N >> M;

    //for文でAの座標を読み取り
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    //昇順ソート
    sort(A.begin(), A.end());

    
    int res = 0, r = 0;
    
    for(int i = 0;i<N;i++){
        while(A[r] < A[i] + M){
            r += 1;
            res = max(res, r-1);
        }
    }

    cout << res << endl;

    return 0;
}