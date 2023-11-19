#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int A[100];
    int m_value;

    cin >> N;
    for(int i=0;i<N;i++) cin >> A[i];

    m_value = A[0];
    for(int i=1;i<N;i++){
        if(A[i] > m_value) m_value = A[i];
    }
    //cout << m_value << endl;

    int second = A[0];
    if(second == m_value){
        second = 0;
    }
    for(int i=1;i<N;i++){
        if(A[i] < m_value && A[i] > second) second = A[i];
        cout << second << endl;
    }

    cout << second << endl;
    return 0;
}