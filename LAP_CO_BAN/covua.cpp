#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("covua.inp", "r", stdin);
    freopen("covua.out", "w", stdout);
    int n; cin >> n;
    string dongle = "";
    string dongchan = "";
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) dongle += 'B';
        else dongle += 'W';
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) dongchan += 'W';
        else dongchan += 'B';
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1) cout << dongle << "\n";
        else cout << dongchan << "\n";
    }
    return 0;
}
