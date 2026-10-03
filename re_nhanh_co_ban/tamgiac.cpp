#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("tamgiac.inp", "r", stdin);
    //freopen("tamgiac.out", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    if(a + b + c == 180 && a > 0 && b > 0 && c > 0){
        if(a == 90 || b == 90 || c == 90) cout << "VUONG" << "\n";
        else if(a == b && b == c && c == a) cout << "DEU" << "\n";
        else if(a == b || b == c || c == a) cout << "CAN" << "\n";
        else cout << "THUONG" << "\n";
    }
    else cout << 0 << "\n";
    return 0;
}
