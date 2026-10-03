#include <bits/stdc++.h>

using namespace std;
int x;
int main()
{
    freopen("BILL.INP","r",stdin);
    freopen("BILL.OUT","w",stdout);
    cin >> x;
    if (x <= 100) cout << x * 2000;
    else if (x <= 200) cout << 100 * 2000 + (x - 100) * 3000;
    else if (x <= 300) cout << 100 * 5000 + (x - 200) * 5000;
    else cout << 10000*100 + (x - 300) * 10000;
    return 0;
}
