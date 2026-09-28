#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sopp.inp", "r", stdin);
    freopen("sopp.out", "w", stdout);
    long long n; cin >> n;
    long long tong = 0;
    for(long long i = 2; i * i < n; i++){
        if(n % i == 0) tong += (1 + i + n / i);
    }
    if(tong > n) cout << 1 << "\n";
    else cout << 0 << "\n";
}
