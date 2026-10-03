#include <bits/stdc++.h>

using namespace std;
int n;

int main()
{
    freopen("NENSO.INP","r",stdin);
    freopen("NENSO.OUT","w",stdout);
    cin >> n;
    while (n > 9)
    {
        int t = 0, m = n;
        while (m > 0)
        {
            t += m % 10;
            m /= 10;
        }
        n = t;
    }
    cout << n;
    return 0;
}
