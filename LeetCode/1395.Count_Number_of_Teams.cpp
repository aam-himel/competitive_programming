/*
    Author : aamHimel

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v = {3,6,7,5,1};
    for(int i=0; i<v.size()-2; i++){
        for(int j=i+1; j<v.size()-1; j++){
            for(int k=i+2; k<v.size(); k++){
                if((v[i] < v[j] && v[j] < v[k]) || (v[i] > v[j] && v[j] > v[k])){
                    cout << i << " " << j << " " << k << endl;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

