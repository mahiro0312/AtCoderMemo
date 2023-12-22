#include <iostream>
using namespace std;
#include <math.h>

string n_ary(string str, int n, int m){
    unsigned long tmp = 0;
    string ret;

    for(int i=0; i<str.length(); i++){
        tmp += (unsigned long) ntodec(str[str.length()-1-i]) * pow_ll(n, i);
    }

    if(tmp==0) return "0";
    while(tmp!=0){
        ret = decton(tmp%m) + ret;
        tmp/=m;
    }
    return ret;
}

/*  関数名          ntodec(const char c)
    説明            char で 文字{0,1,2,...,9,A,B,...,Z} を受け取り、
　　　　　　　　　　　 int で {0,1,2,...9,10,11,...,35}に直して返す。
　　　　　　　　　　　 それ以外の文字が来た場合は-1を返す。
    使用ライブラリ   なし
*/
int ntodec(const char c){
    switch(c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
        case 'G': return 16;
        case 'H': return 17;
        case 'I': return 18;
        case 'J': return 19;
        case 'K': return 20;
        case 'L': return 21;
        case 'M': return 22;
        case 'N': return 23;
        case 'O': return 24;
        case 'P': return 25;
        case 'Q': return 26;
        case 'R': return 27;
        case 'S': return 28;
        case 'T': return 29;
        case 'U': return 30;
        case 'V': return 31;
        case 'W': return 32;
        case 'X': return 33;
        case 'Y': return 34;
        case 'Z': return 35;
        default : return -1;
    }
}

/*  関数名          decton(const int n)
    説明            int で 数値 0〜35 を受け取り、文字{0,1,2,...,9,A,B,...,Z}に直して char で返す。
　　　　　　　　　　　 それ以外の数字が来た場合は \0 を返す。
    使用ライブラリ  なし
*/
char decton(const int n){
    switch(n){
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
        case 16: return 'G';
        case 17: return 'H';
        case 18: return 'I';
        case 19: return 'J';
        case 20: return 'K';
        case 21: return 'L';
        case 22: return 'M';
        case 23: return 'N';
        case 24: return 'O';
        case 25: return 'P';
        case 26: return 'Q';
        case 27: return 'R';
        case 28: return 'S';
        case 29: return 'T';
        case 30: return 'U';
        case 31: return 'V';
        case 32: return 'W';
        case 33: return 'X';
        case 34: return 'W';
        case 35: return 'Z';
        default : return '\0';
    }
}

/*  関数名          pow_ll(long long x, long long n)
    説明            x^n を計算する。long long 対応
    使用ライブラリ  なし
*/
inline long long pow_ll(long long x, long long n){
    long long ret = x;
    if(n==0) return 1;
    for(long long i=1; i<n; i++){
        ret *= x;
    }
    return ret;
}




int main(){
    string N; cin >> N;
    string m_array;
    //レピュニットの種類が増えるごとに進数を増やす
    //その進数で３桁で最大の数字(10進数で)
    //最大１２進数までいく
    for(int i=1;i<=12;i++){
        int m_full = pow(i, 3.0);

        int m_low = pow(i-1, 3.0);


        if(N.compare("1") == 0){
            m_array = n_ary(N, 10, 1);

            break;
        }

        if(m_low <= N && N < m_full){
            m_array = n_ary(N, 10, i);
            break;
        }

        
    }

    string three_ary = n_ary(N, 10, 3);

    int sum = 0;

    for(int i=0;i<(int)(three_ary.length());i++){
        if(three_ary[i] == '0'){
            sum += 1;
        }else if(three_ary[i] == '1'){
            sum += 11;
        }else if(three_ary[i] == '2'){
            sum += 111;
        }else if(three_ary[i] == '3'){
            sum += 1111;
        }else if(three_ary[i] == '4'){
            sum += 11111;
        }else if(three_ary[i] == '5'){
            sum += 111111;
        }else if(three_ary[i] == '6'){
            sum += 1111111;
        }else if(three_ary[i] == '7'){
            sum += 11111111;
        }else if(three_ary[i] == '8'){
            sum += 111111111;
        }else if(three_ary[i] == '9'){
            sum += 1111111111;
        }else if(three_ary[i] == 'A'){
            sum += 11111111111;
        }else if(three_ary[i] == 'B'){
            sum += 111111111111;
        }
    }

    cout << sum << endl;

    return 0;
}