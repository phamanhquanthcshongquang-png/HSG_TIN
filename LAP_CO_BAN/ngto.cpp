#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("ngto1.inp", "r", stdin);
    freopen("ngto1.out", "w", stdout);
    long long n; cin >> n;
	bool sn = true;
    for(int i = 2; i * i <= n; i ++){
        bool stn = true;
	if(n % i == 0) stn = false;
	if(stn == false) sn = false;
    }
    if(sn == true) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
