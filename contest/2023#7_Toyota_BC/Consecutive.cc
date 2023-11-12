// #include <iostream>
// #include <string>
// using namespace std;
// static const int Q_MAX = 300001;

// int main(){
//     int N, Q1[Q_MAX], Q2[Q_MAX], Q;
//     string S;
//     int A[Q_MAX/2 + 1];
//     cin >> N;
//     cin >> Q;
//     cin >> S;
//     for(int i=1;i<=Q;i++){
//         cin >> Q1[i];
//         cin >> Q2[i];
//     }

//     for(int i=1;i<=Q;i++){
//         for(int j=Q1[i];j<=Q2[i]-1;j++){
//             if(S[j] == S[j+1]){
//                 for(int k=j+1;k<=Q2[i]-1;k++){
//                     if(S[k] != S[k+1]){
//                         A[i]++;
//                     }
//                 }
//             }
//         }
//     }

//     for(int i=1;i<=Q;i++) cout << A[i] << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
static const int Q_MAX = 300001;

int main(){
    int N, Q1[Q_MAX], Q2[Q_MAX], Q;
    string S;
    bool cont = false;
    int A[Q_MAX/2 + 1];
    cin >> N;
    cin >> Q;
    cin >> S;
    for(int i=1;i<=Q;i++){
        cin >> Q1[i];
        cin >> Q2[i];
    }

    for(int i=1;i<=Q;i++){
        for(int j=Q1[i];j<=Q2[i]-1;j++){
            if(!cont){
                if(S[j-1] == S[j]){
                    cout << j-1 << " " << S[j-1] << endl;
                cont = true;
                A[i]++;
            }else{
                if(S[j-1] != S[j]){
                cont = false;
            }
            }
        }
    }
    }

    for(int i=1;i<=Q;i++) cout << A[i] << endl;

    return 0;
}