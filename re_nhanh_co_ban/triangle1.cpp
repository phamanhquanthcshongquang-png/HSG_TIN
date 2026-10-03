#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangle1.inp", "r", stdin);
    freopen("triangle1.out", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    if(a > abs(b - c) && a < b + c && b > abs(a - c) && b < a + c && c > abs(a - b) && c < b + a ) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
