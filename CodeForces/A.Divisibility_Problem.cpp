#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    while(t--)
    {
        int res = 0, temp;
        cin >> a >> b;
        if(a < b){
            res = b - a;
        }else if(a%b == 0){
            res = 0;

        }else {
            temp = a/b;
            int c = temp * b;
            if(c < a) {
                c = (temp + 1) * b;
                res = c - a;
            }
        }
        cout << res << endl;
    }
    return 0;
}
