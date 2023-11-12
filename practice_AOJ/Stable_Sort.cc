#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

//配列のサイズは十分か
//配列のインデックスの0オリジンと1オリジンを使い分けているか
//ループ変数i, jの入れる場所はあっているか
//余分な空白や改行を出力していないか

/**
 * @brief 配列の要素を順番に出力する
 * 
 * @param A 
 * @param N 
 */
void trace(int A[], int N){
    for(int i=0;i<=N-1;i++){
        printf("%d", A[i]);
    }
    printf("\n");
}

/**
 * @brief 挿入ソート(0origin)
 * 
 * @param A 
 * @param N 
 */
void insertionSort(int A[], int N){
    for(int i=1;i<=N-1;i++){
        int v = A[i];   
    }
}

int main(){

}