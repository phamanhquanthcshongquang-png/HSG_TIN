#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int main()
{
    freopen("test9\triangle1.inp","r",stdin);
    freopen("test9\triangle1.out","w",stdout);
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b) cout << "YES";
    else cout << "NO";
    return 0;
}
