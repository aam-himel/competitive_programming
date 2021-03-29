/*
    Author : aamHimel

*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[] = {1, 2, 3, 4, 5 ,6};
    int temp[2];
    int index;

    temp[0] = arr[0];
    temp[1] = arr[1];

    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i=2; i< sz; i++){
        arr[i-2] = arr[i];
        index++;
    }

    for(int i=0; i<)

    for(int i=0; i<sz; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}
