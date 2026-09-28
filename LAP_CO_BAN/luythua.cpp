#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("luythua.inp", "r", stdin);
    freopen("luythua.out", "w", stdout);
    long long x, n; cin >> x >> n;
    long long luy = x;
    for(int i = 1; i < n; i++){
        luy *= x;
    }
    cout << luy << "\n";
    return 0;
}
