#include <iostream>
using namespace std;

/**
 * @brief バブルソートを行う
 * 
 * @param A 
 * @param N 
 * @return int 交換回数
 */
int bubbleSort(int A[], int N){
    bool flag = true; //逆順が存在する(true)
    int count = 0;

    for(int i=0;flag;i++){
        //最初は逆順がないとする
            flag = false;
        for(int j=N-1;j>=i+1;j--){

            //一回でも逆順があればflag = true
            if(A[j-1] > A[j]){

                //隣入れ替え
                swap(A[j-1], A[j]);
                flag = true;
                count++;
            }
        }
    }

    return count;
}

int main(){
    int N;
    int A[100];
    int count;
    cin >> N;
    for(int i=0;i<=N-1;i++) cin >> A[i];

    count = bubbleSort(A, N);

    for(int i=0;i<=N-1;i++){
        if(i >= 1){
            cout << " ";
        }
        cout << A[i];
    }

    cout << endl;

    cout << count << endl;

    return 0;
}