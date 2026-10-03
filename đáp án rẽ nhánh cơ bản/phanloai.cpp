#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("PHANLOAI.INP","r",stdin);
    freopen("PHANLOAI.OUT","w",stdout);
    int A, C;
    bool ok = false;
    cin >> A >> C;
    if (A >= 3 && C <= 4)
    { cout << 1 << " "; ok = true; }
    if (A <= 6 && C >= 2)
    { cout << 2 << " "; ok = true; }
    if (A <= 2 && C <= 3)
    { cout << 3; ok = true; }
    if (!ok) cout << 0;
    return 0;
}
