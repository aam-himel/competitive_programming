/*
    Problem Link: https://codeforces.com/problemset/problem/110/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long int n;
    int last, lucky = 0;
    cin >> n;

    while(n){
        last = n%10;
        if(last == 4 || last == 7){
            lucky++;
        }
        n = n/10;
    }

    if(lucky == 4 || lucky == 7){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }

    return 0;
}
