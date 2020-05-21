/*
    Problem Link: https://codeforces.com/problemset/problem/116/A
    Problem : 116/A
    Author: aam Himel

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pre=0,curr=0, post, most = 0;
    cin >> n;
    while(n--){
        cin >> pre >> post;
        curr = curr - pre;
        curr = curr + post;
        if(curr > most){
            most = curr;
        }
    }

    cout << most << endl;
    return 0;
}
