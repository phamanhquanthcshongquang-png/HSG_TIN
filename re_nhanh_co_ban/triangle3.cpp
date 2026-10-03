#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangle3.inp", "r", stdin);
    freopen("triangle3.out", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    if(a > abs(b -c) && a < b + c && b > abs(a - c) && b < a + c && c > abs(a - b) && c < a + b){
        if(a == b || b == c || c == a) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    else cout << "NO" << "\n";
    return 0;
}
