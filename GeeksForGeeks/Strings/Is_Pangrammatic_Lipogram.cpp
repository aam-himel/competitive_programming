/*
    Author : aamHimel
    Problem: https://www.geeksforgeeks.org/check-string-pangrammatic-lipogram/
*/

#include<bits/stdc++.h>
using namespace std;

string alphabets = "abcdefghijklmnopqrstuvwxyz";

void panGrammaticLipogram(string &str){


    for(int i=0; i<str.length(); i++){
        str[i] = tolower(str[i]);
    }

    int counter = 0;

    for(int i=0; i<26; i++){
        int pos = str.find(alphabets[i]);

        if(pos <0 || pos > str.length()){
            counter++;
        }
    }

    if(counter == 0){
        cout<<"Pangram"<<endl;
    }else if(counter >= 2){
        cout << "Might be Liprogram" << endl;
    }else {
       cout<<"Pangrammatic Lipogram"<<endl;
    }
}

int main()
{
    string str = "The quick brown fox jumped over the lazy dog";
    panGrammaticLipogram(str);

    str = "The quick brown fox jumps over the lazy dog";
    panGrammaticLipogram(str);

    str = "The quick brown fox jum over the lazy dog";
    panGrammaticLipogram(str);

    return 0;
}

