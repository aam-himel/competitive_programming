/*
    Problem Link:
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2, s;
    cin >> s1 >> s2 >> s;
    string newS = s1 + s2;
    if(newS.size() != s.size()){
        cout << "NO\n";
        return 0;
    }
    sort(newS.begin(), newS.end());
    sort(s.begin(), s.end());

    for(int i=0; i<newS.size();i++){
        if(newS[i] != s[i]){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
