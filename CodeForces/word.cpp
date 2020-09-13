/*
    Problem Link: https://codeforces.com/problemset/problem/59/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt = 0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] >=48 && s[i] <= 90){
            cnt++;
        }
    }

    for(int i=0; i<s.size(); i++){
        if(cnt > s.size()/2){
            if(s[i] >= 97 && s[i] <= 122){
                s[i] = s[i] - 32;
            }
            cout << s[i];
        }else {
            transform(s.begin(), s.end(),s.begin(), ::tolower);
            cout << s << "\n";
            return 0;
        }
    }

    return 0;
}
