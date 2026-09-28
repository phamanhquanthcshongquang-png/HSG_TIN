#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    vector<long long> songuon;
    for(long long i = n - 84; i < n; i++){
        if(i < 0) continue;
	long long b = i;
        long long a = i;
        while(b > 0){
            a += (b % 10);
            b /= 10;
        }
        if(a == n) songuon.push_back(i);
    }
    if (songuon.empty()) {
        cout << -1 << "\n";
    } else {
        long long min_val = *min_element(songuon.begin(), songuon.end());
        cout << min_val << "\n";
    }
    return 0;
}
