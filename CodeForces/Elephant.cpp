/*
    Problem Link: https://codeforces.com/problemset/problem/617/A
    Author: aam Himel
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, cnt = 0;
    cin >> x;

    if(x%5 == 0){
        cout << x/5;
    }else{
        cout << x/5 + 1;
    }

    return 0;
}
