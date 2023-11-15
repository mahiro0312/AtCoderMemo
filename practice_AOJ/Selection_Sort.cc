#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * @brief 選択ソートを行う 不安定なソート注意
 * 
 * @param A 
 * @param N 
 * @return int 交換回数
 */
int selection_Sort(int A[], int N){

    //           sw 交換回数 minj 各ループでiからN-1までで最初の要素のインデックス  
    int i, j, t, sw = 0,    minj;


    for(i=0; i<=N-2; i++){
        minj = i;
        for(j=i; j<=N-1; j++){
            
            /*jからN-1の中で一番小さい要素を探す*/
            if(A[j] < A[minj]) minj = j;
        }
        //t = A[i]; A[i] = A[minj]; A[minj] = t;
        swap(A[i], A[minj]);
        if(i != minj) sw++;
    }
    return sw;
}

int main(){
    int A[100], N, i, sw;

    // cin >> N;
    // for(i=0; i<=N-1; i++) cin >> A[i];

    // sw = selection_Sort(A, N);

    // for(i=0; i<=N-1; i++){
    //     if(i >= 1) cout << " ";
    //     cout << A[i];
    // }
    // cout << endl;
    // cout << sw;

    scanf("%d", &N);
    for(i=0; i<=N-1; i++) scanf("%d", &A[i]);

    sw = selection_Sort(A, N);

    for(i=0; i<=N-1; i++){
        if(i >= 1) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");

    //改行を忘れず
    printf("%d\n", sw);
    return 0;
}