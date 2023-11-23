#include <stdio.h>
#include <string.h>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

/**
 * @brief 文字から数値に変換する
 * 
 * @param ch 
 * @return int 
 */
int getChar(char ch) {
    if(ch == 'A') return 1;
    else if(ch == 'C') return 2;
    else if(ch == 'G') return 3;
    else if(ch == 'T') return 4;
    else return 0;
}

/**
 * @brief 文字列から数値に変換しkey生成
 * 
 * @param str 変換したい文字列
 * @return long long 
 */
long long getKey(char str[]){
    long long sum = 0, p = 1, i;
    for(i=0; i<strlen(str); i++){
        sum += p*(getChar(str[i]));
        p += 5;
    }
    return sum;
}

/**
 * @brief ハッシュ関数１つ目
 * 
 * @param key 
 * @return int 
 */
int h1(int key) {return key%M; }

/**
 * @brief ハッシュ関数２つ目
 * 
 * @param key 
 * @return int 
 */
int h2(int key) {return 1 + (key % (M - 1)); }

/**
 * @brief ハッシュ値で探索
 * 
 * @param str 
 * @return int 
 */
int find(char str[]){
    long long key, i, h;
    key = getKey(str); //文字列を数値に変換
    for(i=0;; i++){

        //ハッシュ値作成
        h = (h1(key) + i * h2(key)) % M;

        //格納されているハッシュの要素を探す要素を比較
        if(strcmp(H[h], str) == 0) return 1; //成功
        else if(strlen(H[h]) == 0) return 0; //格納されていない 失敗

    }

    return 0;
}

/**
 * @brief 新しく要素を追加する
 * 
 * @param str 
 * @return int 
 */
int insert(char str[]){
    long long key, i, h;
    key = getKey(str); //文字列を数値に変換
    for(i=0;;i++){
        //ハッシュ値作成
        h = (h1(key) + i * h2(key)) % M;
        //格納されているハッシュの要素を挿入する要素を比較
        if(strcmp(H[h], str) == 0) return 1; //すでに入っている
        else if(strlen(H[h]) == 0) {
            //h番目にstrを入れる
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
}

int main(){
    int i, n, h;

    char str[L], com[9];

    for(i=0; i<M; i++) H[i][0] = '\0';
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %s", com, str); 

        if(com[0] == 'i'){
            insert(str);
        }else{
            if(find(str)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
    return 0;
}

