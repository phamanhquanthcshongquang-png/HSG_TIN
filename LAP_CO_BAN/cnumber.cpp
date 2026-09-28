#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("cnumber.inp", "r", stdin);
    freopen("cnumber.out", "w", stdout);
    long long n; cin >> n;
    long long tong = 0;
    for(long long a = 1; a <= n; a++){
        long long i = a;
        bool sodep = true;
        while(i > 0){
            if(i % 10 != 6 && i % 10 != 8) sodep = false;
            i /= 10;
        }
        if(sodep) tong += 1;
    }
    cout << tong << "\n";
    return 0;
}
