#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, cnt = 0;
    int arr[105];
    cin >> n >> k;

    for(int i=0; i< n; i++ ){
        cin >> arr[i];
    }
    for(int j=0; j<n; j++){
        if(arr[j] > 0 && arr[j] >= arr[k-1]){
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}


