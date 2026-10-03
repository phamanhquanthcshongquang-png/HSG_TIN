#include <bits/stdc++.h>

using namespace std;
int n, x=999999999, y=999999999;
int main()
{
    freopen("phantich.inp","r",stdin);
    freopen("phantich.out","w",stdout);
    cin >> n;
    for (int i=1; i*i<=n; i++)
    if (n % i == 0)
    {
        int j = n / i;
        if (i+j < x+y)
        {
            x = i; y = j;
        }
    }
    cout << x << " " << y;
    return 0;
}
