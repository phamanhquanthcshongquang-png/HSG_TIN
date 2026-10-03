#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("sort.inp", "r", stdin);
    //freopen("sort.out", "w" , stdout);
    long long a, b, c; cin >> a >> b >> c;
    long long nho = min(min(a,b), c);
    long long lon = max(max(a,b), c);
    long long giua = a + b + c - nho - lon;
    cout << nho << " " << giua << " " << lon << "\n";
    return 0;
}
