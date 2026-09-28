#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sodep.inp", "r", stdin);
    freopen("sodep.out", "w", stdout);
    long long n;
    cin >> n;
    bool sodep = true;
    while(n > 0){
        if(n % 10 != 6 && n % 10 != 8) sodep = false;
        n /= 10;
    }
    if(sodep) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
