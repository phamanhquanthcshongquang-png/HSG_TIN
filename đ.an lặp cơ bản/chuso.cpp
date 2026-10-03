#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,d=0,t=0;
    freopen("CHUSO.INP","r",stdin);
    freopen("CHUSO.OUT","w",stdout);
    cin >> n;
    while (n>0)
    {
        d++;
        t += n%10;
        n = n/10;
    }
    cout << d <<" " <<t;
    return 0;
}
