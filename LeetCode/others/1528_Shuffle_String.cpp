/*
    Problem Link: https://leetcode.com/problems/shuffle-string/
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string str(s.length(), ' ');

    for(int i=0; i<s.length(); i++){
        str[indices[i]] = s[i];
    }
    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {4,5,6,7,0,2,1,3};
    cout << restoreString("codeleet", v);

    return 0;
}
