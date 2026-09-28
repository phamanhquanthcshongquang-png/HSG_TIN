#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("hcn.inp", "r", stdin);
    freopen("hcn.out", "w", stdout);
    long long n, m; cin >> n >> m;
    string hang(m, '#');
    for(int i = 1; i <= n; i++){
        cout << hang << "\n";
    }
    return 0;
}
