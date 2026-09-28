#include <bits/stdc++.h>

using namespace std;

long long a;

void ham(long long n){
    long long b = a;
    a = 0;
    while (b > 0) {
        a += b % 10;
        b /= 10;
    }
}
int main(){
    freopen("nenso.inp", "r", stdin);
    freopen("nenso.out", "w", stdout);
    cin >> a;
    while(a >= 10){
        ham(a);
    }
    cout << a << "\n";
    return 0;
}
