#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("bill.inp", "r", stdin);
    freopen("bill.out", "w", stdout);
    long long x; cin >> x;
    if(x <= 100) cout << x * 2000 << endl;
    else if(x > 100 && x <= 200) cout << 200000 + 3000 * (x - 100) << endl;
    else if(x > 200 && x <= 300) cout << 500000 + (x - 200) * 5000 << endl;
    else cout << 1000000 + (x - 300) * 10000 << endl;
    return 0;
}
