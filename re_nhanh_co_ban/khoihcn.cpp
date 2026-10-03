#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("khoihcn.inp", "r", stdin);
    freopen("khoihcn.out", "w", stdout);
    long long a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    if ((a<x && b<y) || (a<y && b<x)) cout << "CO";
    else if ((a<x && c<y) || (a<y && c<x)) cout << "CO";
         else if ((b<x && c<y) || (b<y && c<x)) cout << "CO";
              else cout << "KHONG" ;
    return 0;
}
