#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangle1.inp", "r", stdin);
    freopen("triangle1.out", "w", stdout);
    long long a, b, c; cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    return 0;
}
