#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangle5.inp", "r", stdin);
    freopen("triangle5.out", "w", stdout);
    double a, b, c; cin >> a >> b >> c;
    if(a > abs(b - c) && a < b + c && b > abs(a - c) && b < a + c && c > abs(b - a) && c < a + b && a > 0 && b > 0 && c > 0){
        if(a == b && b == c && c == a) cout << "deu" << "\n";
        else if(a == b || b == c || c == a) cout << "can" << "\n";
        if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) cout << "vuong" << "\n";
        else if(b != c && c != a && a != b) cout << "thuong" << "\n";
    }
    else cout << "khong" << "\n";
    return 0;
}
