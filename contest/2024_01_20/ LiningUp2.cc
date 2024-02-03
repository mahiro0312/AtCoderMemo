#include <list>
#include <iostream>
#include <string>
using namespace std;

int main(){
    using namespace std;
    list <string> c2;
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    for(int i=0; i<N; i++){
        auto endResult = std::find(c2.begin(), c2.end(), A[i]);
            if (endResult == c2.end()) {
                auto fResult = std::find(c2.begin(), c2.end(), i);
                    if(fResult == c2.end()){
                        
                    }
            }else {
                
    }
    }
}