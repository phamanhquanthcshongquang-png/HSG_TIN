#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int main()
{
    freopen("triangle3.inp","r",stdin);
    freopen("triangle3.out","w",stdout);
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == c || a == b || b == c) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    return 0;
}
