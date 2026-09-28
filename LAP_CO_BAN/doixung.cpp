#include <bits/stdc++.h>

using namespace std;

int ham(long long n){
    long long daoNguoc = 0;
    while (n > 0) {
        daoNguoc = daoNguoc * 10 + (n % 10);
        n /= 10;
    }
    return daoNguoc;
}
int main(){
    long long a; cin >> a;
    long long resa = ham(a);
    if(resa == a) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
