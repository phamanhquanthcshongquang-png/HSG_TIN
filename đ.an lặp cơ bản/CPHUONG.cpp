#include <bits/stdc++.h>
using namespace std;
int N,f;
int main()
{
    cin >> N;
    int d = 0;
    for ( int i = 1; i <=N ; i++) {
        int x = sqrt(i);
        if (x*x == i) d++;
    }
    cout << d << endl;
    for (int i = 1; i<=N;i++)
    {
        int x = sqrt(i);
        if (x*x == i) 
        {
            cout << i << " ";
        }
    }
    return 0;
}
