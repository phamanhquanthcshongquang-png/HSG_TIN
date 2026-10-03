#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("nganhang.inp", "r", stdin);
    freopen("nganhang.out", "w", stdout);
    long long n, m; cin >> n >> m;
    long long tong = 0;
    while(n < m){
        n *= 1.1;
        tong++;
    }
    cout << tong << "\n";
    return 0;
}
