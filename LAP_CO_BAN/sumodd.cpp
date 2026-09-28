#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sumodd.inp", "r", stdin);
    freopen("sumodd.out", "w", stdout);
    long long n; cin >> n;
    long long tong = 0;
    for(int i = 1; i <= n; i += 2){
        tong += i;
    }
    cout << tong << "\n";
    return 0;
}
