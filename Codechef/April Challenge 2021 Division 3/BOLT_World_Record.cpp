/*
    Author : aamHimel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    float k1, k2, k3, v,value, mx = 9.58;
    cin >> t;

    while(t--)
    {
        cin >> k1 >> k2 >> k3 >> v;
        value = (int)((100/(k1 * k2 * k3 * v)) * 100 + .5);
        value = value / 100;

        if(value >= mx){
            cout << "NO\n";
        }else {
            cout << "YES\n";
        }
    }
    return 0;
}
