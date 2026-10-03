#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("NGANHANG.INP" , "r" , stdin);
   	freopen("NGANHANG.OUT" , "w" , stdout);
long long n, m, c;
	cin >> n >> m;

	c = 0;
	while (n < m) {
		n = n*11;
		if (n%10 >= 5) n = (n/10 + 1);
		else n = n/10;
		c++;
	}
	cout << c;
}