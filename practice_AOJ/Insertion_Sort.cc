#include <iostream>
using namespace std;

/**
 * @brief A[]の要素を全て1行で出力する
 * 
 * @param A 
 * @param N 
 */
void trace(int A[], int N){
    for(int i=0;i<=N-1;i++) {
        if(i >= 1) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

/**
 * @brief 挿入ソートを行い、最初から最後までの配列の状態を出力する
 * 
 * @param A 
 * @param N 
 */
void insertionSort_InTrace(int A[], int N){
    int v, j;

    //最初の状態を出力
    trace(A, N);

    //iは未ソート部分列の先頭
    for(int i=1;i<=N-1;i++){

        //未ソートの先頭
        v = A[i];

        //ソート済みの部分列にvを挿入する位置を探す変数
        j = i-1;

        //jが-1になる、もしくはA[j]がv以下になるまでくり返す
        while(j >= 0 && A[j] > v){

            //vより大きいA[j]はA[j+1]に移動

            A[j+1] = A[j];
            j--;
        }

        //挿入する位置
        A[j+1] = v;

        trace(A, N);
    }
}

/**
 * @brief 挿入ソートを行う　出力はしない
 * 
 * @param A 
 * @param N 
 */
void insertionSort(int A[], int N){
    int v, j;

    for(int i=1;i<=N-1;i++){
        v = A[i];
        j = i-1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
    }
}

int main(){
    int N;
    int A[100];
    cin >> N;
    for(int i=0;i<=N-1;i++) cin >> A[i];

    insertionSort_InTrace(A, N);

    return 0;
}