/*
    Problem Link:
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int i = 0;
    while(i < arr.size()) {
        int temp;
        if(arr[i] == 0){
            arr.emplace(arr.begin()+i, 0);
            arr.pop_back();
            i = i+2;
        }else {
            i++;
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a{1,0,2,3,0,4,5,0};
    duplicateZeros(a);
    return 0;
}
