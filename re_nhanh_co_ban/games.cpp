#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("games.inp", "r", stdin);
    freopen("games.out", "w", stdout);
    int a, b; cin >> a >> b;
    if(a == b) cout << "HOA" << endl;
    else if((a == b - 1) || (a == b + 2)) cout << "BAC" << endl;
    else cout << "NAM" << endl;
    return 0;
}