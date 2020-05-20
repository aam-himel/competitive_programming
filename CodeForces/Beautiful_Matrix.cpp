#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5], res;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin << arr[i][j];
        }
    }


    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
             if(arr[i][j] == 1){
                res = abs(3-i) + abs(3-j);
             }
        }
    }

    cout << res << endl;

    return 0;
}
