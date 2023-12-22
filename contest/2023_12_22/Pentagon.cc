#include <iostream>
using namespace std;

int main(){
    char s1, s2, t1, t2;//A, B, C, D, E 

    cin >> s1 >> s2;
    cin >> t1 >> t2;

    auto near = [](char x, char y){
        if(x > y) swap(x, y);
        return y - x == 1 or y - x == 4;
    };

    if(near(s1, s2) == near(t1, t2))
        cout << "Yes\n";
    else   
        cout << "No\n";
        
    return 0;
}