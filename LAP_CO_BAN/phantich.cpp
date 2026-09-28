#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("phantich.inp", "r", stdin);
    freopen("phantich.out", "w", stdout);
    long long n; cin >> n;
    long long tong = n;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0) {
            tong =min(tong, i + n / i);
        }
    }
    for(int i = 1; i < tong; i++){
        if(n % i == 0 && n % (tong - i) == 0 ) {
            cout << i << " " << tong - i << "\n";
            break;
        }
    }
    return 0;
}
