#include <iostream>
#include <string>
using namespace std;
static const int N_MAX = 200010;

typedef struct pp {
    char name;
    int t;
} P;

int main(){
    int N;
    string S;
    int count;
    P Q[N_MAX];

    cin >> N >> S;
    Q[0].name = S[0];
    Q[0].t++;
    count++;
    for(int i=0;i<N;i++){
        if(S[i] == S[i+1]){
            
        }
    }

    return 0;
}