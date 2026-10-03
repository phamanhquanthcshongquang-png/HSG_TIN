#include <bits/stdc++.h>

using namespace std;
int n,m;

int main()
{
    //freopen("ASHOES.INP","r",stdin);
    //freopen("ASHOES.OUT","w",stdout);
    cin >> n >> m;
    cout << min(n,m) << " " << abs(n-m)/2;
    return 0;
}
