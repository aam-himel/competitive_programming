#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0;
    cin >> n;
    while(n--)
    {
        char s[10];
        scanf(" %s", s);

        if(s[1] == '+')
            x++;
        else
            x--;

    }
    cout << x << endl;

    return 0;
}
