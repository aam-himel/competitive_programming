/*
    Author : aamHimel
    Problem: https://www.geeksforgeeks.org/pangram-checking/
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

bool phanGram(string str) {
     vector<bool> freq(26, false);
     int index;
     for(int i=0; i<str.length(); i++){

        if('A' <= str[i] && 'Z' >= str[i]){
            index = str[i] - 'A';
        }else if('a' <= str[i] && 'z' >= str[i]){
            index = str[i] - 'a';
        }else {
            continue;
        }
        freq[index] = true;
     }
     for(int i=0; i<26; i++){
        if(freq[i] == false) return false;
     }
     return true;
}


int main()
{
    string str = "The quick brown fox jumps over the"
                 " lazy dog";

    cout << phanGram(str);
    return 0;
}

