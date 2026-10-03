#include <bits/stdc++.h>

using namespace std;
int n,m;
int main()
{
    freopen("hcn.inp","r",stdin);
    freopen("hcn.out","w",stdout);
    cin >> m >> n;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<= n; j++) cout << '#';
        cout << endl;
    }
    return 0;
}
