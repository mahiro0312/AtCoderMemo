#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    char g[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            g[i][j] = '.';
        }
    }

    //高橋の立っている場所
    int tx = 0;
    int ty = 0;

    //高橋の向いている方角 n e s w
    char lo = 'n';

    rep(i, n) {
        if(g[ty][tx] == '.'){ //もし白なら
            g[ty][tx] = '#'; //黒に塗る
            if(lo == 'n'){
                lo = 'e';
                if(tx == w-1){
                    tx = 0;
                }else{
                    tx++;
                }


            }else if(lo == 'e'){
                lo = 's';
                if(ty == h-1){
                    ty = 0;
                }else{
                    ty++;
                }
            }else if(lo == 's'){
                lo = 'w';
                if(tx == 0){
                    tx = w-1;
                }else{
                    tx--;
                }
            }else if(lo == 'w'){
                lo = 'n';
                if(ty == 0){
                    ty = h-1;
                }else{
                    ty--;
                }
            }
        }else{ //黒なら
        g[ty][tx] = '.'; //白に塗るs
            if(lo == 'n'){
                lo = 'w';
                if(tx == 0){
                    tx = w-1;
                }else{
                    tx--;
                }
            }else if(lo == 'w'){
                lo = 's';
                if(ty == h-1){
                    ty = 0;
                }else{
                    ty++;
                }
            }else if(lo == 's'){
                lo = 'e';
                if(tx == w-1){
                    tx = 0;
                }else{
                    tx++;
                }
            }else if(lo == 'e'){
                lo = 'n';
                if(ty == 0){
                    ty = h-1;
                }else{
                    ty--;
                }
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << g[i][j];
        }
        cout << endl;
    }
    return 0;
}