#include <bits/stdc++.h>

using namespace std;

int n;

bool KT(int x)
{
    while (x > 0)
    {
        int du = x % 10;
        if (du != 6 && du != 8) return false;
        x = x/10;
    }
    return true;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    cin >> n;
    if (KT(n)) cout << "YES"; else cout << "NO";
    return 0;
}
