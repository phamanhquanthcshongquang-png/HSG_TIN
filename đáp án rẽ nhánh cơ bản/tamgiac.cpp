#include <bits/stdc++.h>

using namespace std;
int A, B, C;
int main()
{
    //freopen("TAMGIAC.INP","r",stdin);
    //freopen("TAMGIAC.OUT","w",stdout);
    cin >> A >> B >> C;
    if (A > 0 && B > 0 && C > 0)
    {
        if (A <= 180 && B <= 180 && C <= 180)
        {
            if (A+B+C == 180)
            {
                if (A==B && B==C) cout << "DEU";
                else if (A==B || B==C || C==A) cout << "CAN";
                     else if (A==90 || B==90 || C==90) cout << "VUONG";
                          else cout << "THUONG";
            }
            else cout << 0;
        }
        else cout << 0;
    }
    else cout << 0;
    return 0;
}
