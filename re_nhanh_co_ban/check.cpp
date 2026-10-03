#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("check.inp", "r", stdin);
    //freopen("check.out", "w", stdout);
    int n; cin >> n;
    int d = n % 10;
    int c = n / 10 % 10;
    int b = n / 100 % 10;
    int a = n / 1000;
    if((a + b) == (c + d)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}