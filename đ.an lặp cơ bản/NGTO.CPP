#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,d = 2;
int main()
{
    freopen("NGTO1.INP","r",stdin);
    freopen("NGTO1.OUT","w",stdout);
    cin >> n;
    if (n==1)
    {
        cout << "NO";
        return 0;
    }
    for (int i=2; i<=sqrt(n);i++)
    if (n % i == 0)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
