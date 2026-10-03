#include <iostream>
#include <cstdio>
using namespace std;
int x,y,a,b,c;
int main()
{
    freopen("KHOIHCN.INP","r",stdin);
    freopen("KHOIHCN.OUT","w",stdout);
    cin >> a >> b >> c >> x >> y;
    if ((a<x && b<y) || (a<y && b<x)) cout << "CO";
    else if ((a<x && c<y) || (a<y && c<x)) cout << "CO";
         else if ((b<x && c<y) || (b<y && c<x)) cout << "CO";
              else cout << "KHONG" ;
    return 0;
}
