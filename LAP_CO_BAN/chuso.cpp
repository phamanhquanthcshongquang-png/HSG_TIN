#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("chuso.inp", "r", stdin);
    freopen("chuso.out", "w", stdout);
    long long n; cin >> n;
    int dem = 0;
    int tong = 0;
    while(n > 0){
        dem += 1;
        tong += n % 10;
        n /= 10;
    }
    cout << dem << " " << tong << "\n";
    return 0;
}
