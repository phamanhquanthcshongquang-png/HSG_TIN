#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    freopen("chinhphuong.inp","r",stdin);
    freopen("chinhphuong.out","w",stdout);
    cin >> n;
    if (n == sqrt(n) * sqrt(n)) cout << "yes";
    else cout << "no";
    return 0;
}
