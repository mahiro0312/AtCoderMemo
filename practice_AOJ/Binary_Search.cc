#include <stdio.h>

int A[1000000], n;

/**
 * @brief 二分探索を行う 昇順の整数配列での探索に有用
 * 
 * @param key 探す整数
 * @return int 成功>1 失敗>0
 */
int binarySearch(int key){
    int left = 0;
    int right = 0;
    int mid;

    //探す要素が１以上である
    while(left < right){
        mid = (left + right) / 2;
        if(key == A[mid]) return 1;//探索成功
        if(key > A[mid]) left = mid + 1;//右側(後半)を探索
        else if(key < A[mid]) right = mid;//前半を探索
    }
    return 0;
}

int main(){
    int i, q, k, sum = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

    scanf("%d", &q);

    for(i=0; i<q; i++){
        scanf("%d", &k);
        if(binarySearch(k)) sum++;
    }

    printf("%d\n", sum);

    return 0;
}