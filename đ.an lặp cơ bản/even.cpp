#include <bits/stdc++.h>

using namespace std;

int n;
int main()
{
    freopen("EVEN.INP","r",stdin);
    freopen("EVEN.OUT","w",stdout);
    cin >> n;
    for (int i=2;i<=n;i+=2)
        cout << i << " ";
    return 0;
}
