
/*
    Problem name: Check If N and Its Double Exist
    Description: Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    unordered_map<int, int> s;
    if(arr.size() == 0) return false;

    for(int i=0; i<arr.size(); i++){
        s[arr[i]]++;
    }

    // Need to check whether there more than one 0 because 0 == 2*0 fulfill the condition  N = 2 * M;
    if(s.find(0) != s.end()){
        if(s[0] > 1)
            return true;
        else
            return false;
    }

    for(int i=0; i<arr.size(); i++){
        if( (arr[i] != 0) && s.find(arr[i]* 2) != s.end()){
            return true;
        }
    }
    return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {3,1,0,0};
    cout << checkIfExist(arr);


    return 0;
}
