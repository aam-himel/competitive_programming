/*
    Problem Link:https://codeforces.com/problemset/problem/469/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, q;
    int arr[240];
    cin >> n >> p;

    for(int i=0; i<p; i++){
        cin >> arr[i];
    }

    cin >> q;
    for(int i=p; i< p+q; i++){
        cin >> arr[i];
    }
    sort(arr, arr+(p+q));
    if(arr[p+q - 1] >= n){
        cout << "I become the guy." <<endl;
    }else {
         cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
