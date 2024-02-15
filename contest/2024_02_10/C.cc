#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

map<long long, long long> m;

long long divide(long long n){
    if(n == 1) return 0;
    if(m.count(n)) return m[n];
    return m[n] = divide(n/2) + divide((n + 1)/2) + n;
}

int main(){
    long long n;
    cin >> n;
    cout << divide(n) << endl;
    return 0;
}

// #include <iostream>
// #include <map>
// using namespace std;
// map<long long, long long> m;
// long long f(long long N) {
//   if (N == 1) return 0;
//   if (m.count(N)) return m[N];
//   return m[N] = f(N / 2) + f((N + 1) / 2) + N;
// }
// int main() {
//   long long N;
//   cin >> N;
//   cout << f(N) << endl;
// }