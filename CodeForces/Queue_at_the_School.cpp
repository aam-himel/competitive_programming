/*
    Problem Link: https://codeforces.com/problemset/problem/266/B
    Author: aam Himel
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;

    while(t--){
        for(int i=0; i<n; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
