/*
    Author : aamHimel
    Problem: https://www.geeksforgeeks.org/array-rotation/
*/

#include<bits/stdc++.h>
using namespace std;

void leftArrayRotateByOne(int arr[], int n) {
    int temp = arr[0];

    for(int i=0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n - 1] = temp;
}

void leftArrayRotate(int arr[], int d, int n){
    for(int i=0; i<d; i++)

}

int main()
{
    int arr = {1, 3, 4, 5, 6};

    return 0;
}

