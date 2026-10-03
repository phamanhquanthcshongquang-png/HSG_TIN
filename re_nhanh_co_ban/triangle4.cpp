#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangle4.inp", "r", stdin);
    freopen("triangle4.out", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && a == b && b == c && c == a) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
