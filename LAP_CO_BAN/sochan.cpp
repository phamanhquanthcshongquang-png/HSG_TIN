#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sochan.inp", "r", stdin);
    freopen("sochan.out", "w", stdout);
    int n; cin >> n;
    int tong = 0;
    for(int i = 6; i <= n; i += 6){
        tong += 1;
    }
    cout << tong << "\n";
    for(int i = 6; i <= n; i += 6){
        cout << i << " ";
    }
    return 0;
}
