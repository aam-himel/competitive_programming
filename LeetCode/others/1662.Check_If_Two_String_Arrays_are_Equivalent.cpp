/*
    Author : aamHimel

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> st1 = {"ab", "cd"};
    vector<string> st2 = {"abc", "d"};
    string str = "";
    string str1 = "";

    for(auto s:st1) str += s;
    for(auto s:st2) str1 += s;
    if(str == str1) cout << "True "<< endl;
    else
    return cout << "False" << endl;

    return 0;
}
