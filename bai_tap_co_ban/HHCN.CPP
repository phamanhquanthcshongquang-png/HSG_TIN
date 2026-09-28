#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("HHCN.INP", "r", stdin);
    //freopen("HHCN.OUT", "w", stdout);
    long long ab, bc, ca; cin >> ab >> bc >> ca;
    double tich = sqrt(ab * bc * ca);
    cout << (tich / ab + tich / bc + tich / ca) * 4 << endl;
    return 0;
}