#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("sum.inp", "r", stdin);
    freopen("sum.out", "w", stdout);
    int mang[5];
    cin >> mang[0] >> mang[1] >> mang[2] >> mang[3] >> mang[4];
    int gtln = *max_element(mang, mang + 5);
    int gtnn = *min_element(mang, mang + 5);
    int tong = accumulate(mang, mang + 5, 0);
    cout << tong - gtln << " " << tong - gtnn << endl;
}