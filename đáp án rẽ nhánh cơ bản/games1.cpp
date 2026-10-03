#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fi("GAMES.INP");
ofstream fo("GAMES.OUT");
int x,y,z;
int main()
{
    fi >> x >> y >> z;
    int k = max(x,max(y,z));
    int p = min(x,min(y,z));
    if (x != k && x != p) fo << max(abs(x-k),abs(x-p)) - 1;
    else
    {
        if (y != k && y != p) fo << max(abs(y-k),abs(y-p)) - 1;
        else
        {
            if (z != k && z != p) fo << max(abs(z-k),abs(z-p)) - 1;
        }
    }
    return 0;
}
