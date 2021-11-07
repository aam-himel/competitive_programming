/*
    Problem Link:https://leetcode.com/problems/defanging-an-ip-address/
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;


string defangIPaddr(string address)
{
    string str;
    int cnt = 0;
    for(int i=0; i<address.length(); i++)
    {
        if(address[i] == '.')
        {
            str.push_back('[');
            str.push_back('.');
            str.push_back(']');
        }
        else
        {
            str.push_back(address[i]);
        }

    }
    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << defangIPaddr("1.1.1.1");

    return 0;
}
