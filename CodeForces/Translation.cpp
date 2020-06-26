/*
    Problem Link: https://codeforces.com/problemset/problem/41/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    int flag = 0;
    cin >> s >> t;
    reverse(t.begin(), t.end());

    if(s != t){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }

    return 0;
}
