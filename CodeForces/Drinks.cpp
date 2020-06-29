/*
    Problem Link: https://codeforces.com/problemset/problem/200/B
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, arr[105];
    double sum = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i]/100.0;
    }

    cout << double(sum/n)*100 << "\n";

    return 0;
}
