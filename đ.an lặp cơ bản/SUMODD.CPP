#include <bits/stdc++.h>

using namespace std;

int n, S = 0;
int main()
{
    freopen("SUMODD.INP","r",stdin);
    freopen("SUMODD.OUT","w",stdout);
    cin >> n;
    for (int i=1;i<=n;i+=2)
        S += i;
    cout << S;
    return 0;
}
