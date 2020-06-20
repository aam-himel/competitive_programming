/*
    Problem Link: https://codeforces.com/problemset/problem/677/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, cnt = 0;
    cin >> n >> h;
    int num[n];

    for(int i=0; i<n; i++){
        cin >> num[i];
        if(num[i] > h){
            cnt++;
        }
    }

    cout << n + cnt << "\n";
    return 0;
}
