#include <stdio.h>
#include <string.h>
#define LEN 100005 //十分な配列の確保

//ラウンドロビンスケジューリング用のキュー
//キューのenqueueとdequeueはO(1)で計算可能
//サイズは100005


/*プロセスを表す構造体*/
typedef struct pp {
    char name[100];
    int t;
} P;

P Q[LEN];
//  head 先頭 tail 最後の要素の１つ後ろ
int head,    tail, n;

/**
 * @brief キューに要素xを追加する 右から入れるイメージ
 * 
 * @param x 
 */
void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

/**
 * @brief キューの先頭から要素を取り出す　左(head)から取り出すイメージ
 * 
 * @return P 
 */
P dequeue(){
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

/*最小値を返す*/
int min(int a, int b) {return a < b ? a : b;}

int main(){
    //  elaps 処理時間合計値 c １回の処理時間
    int elaps = 0,         c;
    //     q 処理の基準
    int i, q;
    P u;
    scanf("%d %d", &n, &q);

    /*Q[]に順番に追加*/
    for(i=1; i<=n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }

    head = 1; tail = n + 1;

    /*シミュレーション*/
    while(head != tail){

        //先頭を取り出す
        u = dequeue();

        //qより処理時間が短ければ0までそのまま処理される
        c = min(q, u.t);
        u.t -= c;

        //cを毎回加算しておく
        elaps += c;

        //全て処理できていなければキューの末尾に入れる
        if(u.t > 0) enqueue(u);
        else{
            printf("%s %d\n", u.name, elaps);
        }
    }

    return 0;
}

