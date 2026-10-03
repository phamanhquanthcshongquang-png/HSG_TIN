#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("cnumber.inp","r",stdin);
    freopen("cnumber.out","w",stdout);
    cin >> n;
    int res = 0;
    for (int i=6;i<=n; i++)
    {
        bool ok = true;
        int x = i;
        while (x)
        {
            int r = x % 10;
            if (r != 6 && r != 8)
            {
                ok = false;
                break;
            }
            x /= 10;
        }
        if (ok) res++;
    }
    cout << res;
    return 0;
}
