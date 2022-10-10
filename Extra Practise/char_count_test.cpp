/*
    Author : aamHimel

*/

#include<bits/stdc++.h>
using namespace std;

 int countConsistentStrings(string allowed, vector<string>& words) {
     for(int i=0; i<allowed.size(); i++){
        int pos = words.find(allowed[i]);
        cout << pos;
     }
}

int main()
{
    string str = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    countConsistentStrings(str, words);
    return 0;
}

