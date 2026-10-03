#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "w", stdout);
    int mang[3]; cin >> mang[0] >> mang[1] >> mang[2];
    sort(mang, mang + 3);
    if(mang[2] - mang[1] == mang[1] - mang[0]) cout << mang[2] + mang[1] - mang[0] << "\n";
    else{
        if(mang[1] - mang[0] > mang[2] - mang[1]) cout << mang[0] + mang[2] - mang[1] << "\n";
        else cout << mang[1] + mang[1] - mang[0];
    }
    return 0;
}
