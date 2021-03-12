#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x, temp;
    int arr[105];
    cin >> n >> h >> x;

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    /*
    for(int i=0; i < n; i++){
        cout << arr[i];
    }
    */
    if(x >= h){
        cout << "YES\n";
        return 0;
    }else{
        for(int i=0; i<n; i++){
            if(arr[i] + x >= h) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
