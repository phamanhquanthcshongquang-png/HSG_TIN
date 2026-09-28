#include <bits/stdc++.h>

using namespace std;

int ham( long a, long b){
    if(b == 0) return a;
    return ham(b, a % b);
}

int main(){
    freopen("ucln.inp", "r", stdin);
    freopen("ucln.out", "w", stdout);
    long long m, n; cin >> m >> n;
    long long x = abs(m);
    long long y = abs(n);
    cout << ham(x, y) << "\n";


}
