#include <iostream>
using namespace std;

int main(){
    int K, G, M;

    cin >> K >> G >> M;

    //今入っているグラス量 ng
    //今入っているマグカップ nm
    int ng = 0, nm = 0, z;

    for(int i=0;i<K;i++){
        if(ng == G){
            ng = 0;
        }else if(nm == 0){
            nm = M;
        }else{

            //グラス量とマグカップの空きを比べる
            z = min(G-ng, nm);
            ng += z, nm -= z;
        }
    }

    cout << ng << " " << nm << endl;

    return 0;
}