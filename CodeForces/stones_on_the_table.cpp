#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, cnt = 0;
    char arr[60];

    cin >> n;
    cin >> arr;

    for(i=0; i<n; i++){
        if(arr[i+1] == arr[i]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
