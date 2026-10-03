#include <bits/stdc++.h>

using namespace std;

int main(){
//freopen("ashoes.inp", "r", stdin);
//freopen("ashoes.out", "w", stdout);
int m, n; cin >> m >> n;
int res = abs(m - n) / 2;
cout << min(m, n) << " " << res << "\n";
return 0;
}
