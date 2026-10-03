#include <bits/stdc++.h>

using namespace std;

int n;
long long S = 1;
int main()
{
    freopen("GIAITHUA.INP","r",stdin);
    freopen("GIAITHUA.OUT","w",stdout);
    cin >> n;
    for (int i=2;i<=n;i++)
        S *= i;
    cout << S;
    return 0;
}
