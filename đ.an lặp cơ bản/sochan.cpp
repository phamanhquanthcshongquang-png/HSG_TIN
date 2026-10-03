#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("SOCHAN.INP","r",stdin);
    freopen("SOCHAN.OUT","w",stdout);
    cin >> n;
    cout << n/6 << endl;
    for (int i = 1; i<=n; i++)
    if (i % 6 == 0) cout << i << " ";
    return 0;
}
