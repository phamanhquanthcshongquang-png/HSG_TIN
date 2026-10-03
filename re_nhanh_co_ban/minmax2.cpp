#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("minmax2.inp", "r", stdin);
    freopen("minmax2.out", "w", stdout);
    int a, b; cin >> a >> b;
    if (a < b) cout << a <<  " " << b;
    if(a > b) cout << b << " " << a;
    if(a == b) cout << a << " " <<  a << "\n";
    return 0;
}