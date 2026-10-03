#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("games.inp", "r", stdin);
    freopen("games.out", "w", stdout);
    long long x, y, z; cin >> x >> y >> z;
    int k = max(x,max(y,z));
    int p = min(x,min(y,z));
    if (x != k && x != p) cout << max(abs(x-k),abs(x-p)) - 1;
    else
    {
        if (y != k && y != p) cout << max(abs(y-k),abs(y-p)) - 1;
        else
        {
            if (z != k && z != p) cout << max(abs(z-k),abs(z-p)) - 1;
        }
    }
    return 0;
}
