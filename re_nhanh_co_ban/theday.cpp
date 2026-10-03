#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("theday.inp", "r", stdin);
    //freopen("theday.out", "w", stdout);
    int d, t, n; cin >> d >> t >> n;
    int cuoi = 30;
    int cuoit2 = 30;
    if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) cuoi += 1;
    if(t == 2 && (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))) cuoit2 -= 1;
    else if(t == 2) cuoit2 -= 2;
    if(t == 2) cuoi = cuoit2;
    if(d != cuoi) d += 1;
    else if(d == cuoi) {
        d = 1;
        t += 1;
        if(t == 13) {
            n += 1;
            t = 1;
        }
    }
    cout << d << " " << t << " " << n << "\n";
    return 0;
}
