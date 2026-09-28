#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("tamgiac.inp", "r", stdin);
    freopen("tamgiac.out", "w", stdout);
    int n; cin >> n;
    int a = n;
    for(int i = 1; i <= n; i++){
        string s(a, '*');
        cout << s << "\n";
        a -= 1;
    }
    return 0;
}
