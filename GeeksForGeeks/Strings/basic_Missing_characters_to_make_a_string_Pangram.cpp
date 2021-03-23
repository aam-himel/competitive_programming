S/*
    Author : aamHimel
    problem: https://www.geeksforgeeks.org/missing-characters-make-string-pangram/
*/

#include<bits/stdc++.h>
using namespace std;

string missingCharecters(string &str)
{
    vector<bool> freq(26, false);


    for(int i=0; i<str.length(); i++)
    {
        if('a' <= str[i] && 'z' >= str[i])
        {
            freq[str[i] - 'a'] = true;
        }
        else if('A' <= str[i] && 'Z' >= str[i])
        {
            freq[str[i] - 'A'] = true;
        }
    }

    string res = "";

    for(int i=0; i<26; i++)
    {
        if(freq[i] == false)
        {
            res.push_back((char)(i+'a'));
        }
    }
    return res;
}

int main()
{
    string str = "The quick brown fox jumps";
    cout << missingCharecters(str);

    return 0;
}

