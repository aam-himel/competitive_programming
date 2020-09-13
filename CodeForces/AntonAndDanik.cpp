/*
    Problem Link: https://codeforces.com/problemset/problem/734/A
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cntA, cntD;
    cntA = cntD = 0;
    string s;
    cin >> n;
    cin >> s;

    for(int i=0; i<n;i++){
        if(s[i] == 'A'){
                cntA++;
        }else if(s[i] == 'D'){
            cntD++;
        }
    }

    if(cntA == cntD){
        cout << "Friendship\n";
    }else if(cntA > cntD){
        cout << "Anton\n";
    }else {
        cout << "Danik\n";
    }
    return 0;
}
