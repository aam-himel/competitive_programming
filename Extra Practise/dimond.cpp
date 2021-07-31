/*
    Author : aamHimel
*/

#include <bits/stdc++.h>
using namespace std;

void printDimond(int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << "..";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "~~";
        }

        // Right side
        for(int k = 2; k<=i; k++)
        {
            cout << "~~";
        }
        cout << endl;
    }
    for(int i= n-1; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << "..";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "~~";
        }
        for(int k=i-1; k>=1; k--)
        {
            cout << "~~";
        }
        cout << endl;
    }



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    printDimond(n);
    printDimond(n);


    return 0;
}
