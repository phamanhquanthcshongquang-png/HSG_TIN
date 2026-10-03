#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("minmax4.inp", "r", stdin);
    freopen("minmax4.out", "w", stdout);
    int mang[4];
    cin >> mang[0] >> mang[1] >> mang[2] >> mang[3];
    cout << *min_element(mang, mang + 4) << " " << *max_element(mang, mang + 4) << endl;
    return 0;
}