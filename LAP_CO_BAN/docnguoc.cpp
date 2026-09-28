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
    long long a, b; cin >> a >> b;
    long long resa = ham(a);
    long long resb = ham(b);
    cout << max(resa, resb) << "\n";
    return 0;
}
