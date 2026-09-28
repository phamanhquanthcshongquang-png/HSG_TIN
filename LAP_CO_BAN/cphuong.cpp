#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("cphuong.inp", "r", stdin);
    freopen("cphuong.out", "w", stdout);
    int n; cin >> n;
    int i = 1;
    int a = 1;
    int tong = 0;
    while(i * i <= n){
        tong += 1;
        i++;
    }
    cout << tong << "\n";
    while(a * a <= n){
        cout << a * a << " ";
        a++;
    }
    return 0;
}
