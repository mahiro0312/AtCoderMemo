#include <iostream>
using namespace std;

int main() {

    int A[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> A[i][j];
        }
    }

    int ver_sum[9];
    int wid_sum[9];
    int box_sum[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            ver_sum[i] += A[i][j];
            wid_sum[j] += A[i][j];
            
            if(0<=i&&i<=2&&0<=j&&j<=2){
                box_sum[0] += A[i][j];
            }else if(0<=i&&i<=2&&3<=j&&j<=5){
                box_sum[1] += A[i][j];
            }else if(0<=i&&i<=2&&6<=j&&j<=8){
                box_sum[2] += A[i][j];
            }else if(3<=i&&i<=5&&0<=j&&j<=2){
                box_sum[3] += A[i][j];
            }else if(3<=i&&i<=5&&3<=j&&j<=5){
                box_sum[4] += A[i][j];
            }else if(3<=i&&i<=5&&6<=j&&j<=8){
                box_sum[5] += A[i][j];
            }else if(6<=i&&i<=8&&0<=j&&j<=2){
                box_sum[6] += A[i][j];
            }else if(6<=i&&i<=8&&3<=j&&j<=5){
                box_sum[7] += A[i][j];
            }else if(6<=i&&i<=8&&6<=j&&j<=8){
                box_sum[8] += A[i][j];
            }
        }
    }

    for(int i=0;i<9;i++){
        if(ver_sum[i]!=45 || wid_sum[i]!=45 || box_sum[i]!=45){
            cout << "No" << endl;
            exit(0);
        }
    }

    cout << "Yes" << endl;
}