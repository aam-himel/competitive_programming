/*
    Problem Link: https://codeforces.com/problemset/problem/61/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s1, s2, s3;
    cin >> s1 >> s2;

    for(int i=0; i<s1.size(); i++){
       if(s1[i] != s2[i]) s3.push_back('1');
       else s3.push_back('0');
    }

    cout << s3;
    return 0;
}
