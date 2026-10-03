#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("chinhphuong.inp", "r", stdin);
    freopen("chinhphuong.out", "w", stdout);
    int n; cin >> n;
    int can = sqrt(n);
    if(can * can == n) cout << "yes" << endl;
    else cout << "no" << endl; 
    return 0;
}