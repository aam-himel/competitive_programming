/*
    Author : aamHimel
    Problem: Rotate array with temp array
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    int temp[d+1];

    int m = sizeof(temp)/sizeof(temp[0]);
    int n = sizeof(arr)/sizeof(arr[0]);

    // step 1 - store first d elements into temp array
    for(int i = 0; i<d; i++)
    {
        temp[i] = arr[i];
    }

    // step 2 - shift left every element by d
    int index = 0;
    for(int i =0; i<n - d; i++)
    {
        arr[index++] = arr[i+ d];
    }

    // step 3

    for(int i=0; i<m; i++ ){
        arr[index++] = temp[i];
    }

    for(int i =0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

