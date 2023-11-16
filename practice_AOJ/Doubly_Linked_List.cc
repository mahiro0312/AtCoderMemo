#include <cstdio>
#include <cstdlib>
#include <cstring>

//ノード一つの構造体
struct Node {
    int key;

    Node *next, //右ノードへのポインタ        
         *prev; //左ノードへのポインタ
};

Node *nil;

/**
 * @brief 指定されたキーのノードを探す
 * 
 * @param key 
 * @return Node* 
 */
Node* listSearch(int key){
    Node *cur = nil->next;
    
    while(cur != nil && cur->key != key){
        cur = cur->next;
    }
    return cur;
}

/**
 * @brief 双方向リストの初期化
 * 
 */
void init(){
    //malloc(サイズ) 指定したサイズだけメモリを動的に確保する
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

/**
 * @brief キーの一覧を表示
 * 
 */
void printList() {
    Node *cur = nil->next;
    int isf = 0;
    while(true){
        if(cur == nil) break;
        if(isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

/**
 * @brief 指定されたノードを削除
 * 
 * @param t 
 */
void deleteNode(Node *t){
    if(t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

/**
 * @brief 先頭要素を削除
 * 
 */
void deleteFirst(){
    //nilの次は先頭
    deleteNode(nil->next);
}

/**
 * @brief 末尾を削除
 * 
 */
void deleteLast(){
    //nilの前は末尾
    deleteNode(nil->prev);
}

void deleteKey(int key){

    //key番目で出てきたノードを削除
    deleteNode(listSearch(key));
}

void insert(int key){

    //malloc(サイズ) 指定したサイズだけメモリを動的に確保する
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    //４段階で連結する
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main(){
    int key, n, i;//n 命令の数
    int size = 0; //双方向リストのサイズ
    char com[20]; //コマンド命令
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();

    for(i=0; i<n; i++){
        scanf("%s%d", com, &key);
        if(com[0] == 'i') {insert(key); np++; size++;}
        else if(com[0] == 'd'){
            if(strlen(com) > 6){
                if(com[6] == 'F') deleteFirst();
                else if(com[6] == 'L') deleteLast();
            }else{
                deleteKey(key);
                nd++;
            }
            size--;
        }
    }
    printList();

    return 0;
}