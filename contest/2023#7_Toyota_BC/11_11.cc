#include <iostream>
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    
    int D[N+1];
    for(int i=1;i<=N;i++) cin >> D[i];

    for(int j=1;j<=N;j++){
        if(j <= 9){
            if(j <= D[j] && D[j] <= j*10+j){
                sum += 1;
            }
            else if(j*10+j <= D[j]){
                sum += 2;
            }
        }
        else if(j >= 10){
            if(j%10 == j/10){
                if(D[j] < j%10){
                    //0
                }
                else if(j%10 <= D[j] && D[j] < j){
                    sum += 1;
                }
                else if(j <= D[j]){
                    sum += 2;
                }
            }
        }
    }

    cout << sum << endl;
    
    return 0;
}