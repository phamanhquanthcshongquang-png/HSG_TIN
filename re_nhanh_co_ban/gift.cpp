#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("gift.inp", "r", stdin);
    freopen("gift.out", "w", stdout);
    int n; cin >> n;
    if(n % 2 == 0) cout << n / 2 << " " << n / 2 << endl;
    else cout << n / 2 << " " << n - n / 2 << endl;
    return 0;
}