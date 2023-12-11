#include <iostream>
using namespace std;

int main(){
    int N, M;
    string S;

    cin >> N >> M;
    cin >> S;

    // //洗濯されてるシャツの枚数
    // int nM = M, nR = 0;
    // int R = 0;

    // for(int i=1;i<=N;i++){
    //     if(S[i] == '0'){
    //         nM = M;
    //         nR = R;
    //     }else if(S[i] == '1'){
    //         if(nM != 0){
    //             nM--;
    //         }else if(nR != 0){
    //             nR--;
    //         }else {
    //             R++;
    //         }
    //     }else if(S[i] == '2'){
    //         if(nR != 0){
    //             nR--;
    //         }else{
    //             R++;
    //         }
    //     }
    // }

    int R = 0;

    int nM = 0, nR = 0;

    S+="0";

    for(int i=0;i<=N;i++){
        if(S[i] == '0'){

            //ロゴ入りのTシャツをnR舞以上持っている
            R = max(R, max(nM + nR - M, nR));
            nM = 0, nR = 0;
        }
        if(S[i] == '1') nM++;
        if(S[i] == '2') nR++;
    }

    cout << R << endl;
    return 0;
}