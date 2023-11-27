#include <stdio.h>

int main(){
    int N, L, A[1001], i, count = 0;

    scanf("%d", &N);
    scanf("%d", &L);

    for(i=0;i<N;i++) scanf("%d", &A[i]);

    for(i=0;i<N;i++){
        if(A[i] >= L){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}