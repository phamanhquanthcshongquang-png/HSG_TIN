#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("even.inp", "r", stdin);
    freopen("even.out", "w", stdout);
    long long n; cin >> n;
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    return 0;
}
