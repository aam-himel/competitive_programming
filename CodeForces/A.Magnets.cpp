/*
    Author : aamHimel
    problem: https://codeforces.com/problemset/problem/344/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string input;

    cin >> n;

    vector<string> str;

    for(int i=0; i<n; i++){

        cin >> input;
        str.push_back(input);
    }
    if(str.size() == 0) return 0;

    string current = str[0];
    int cnt = 1;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i] == current){
            continue;
        }else {
            current = str[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

