#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, arr[5],  cnt = 0, mainCnt = 0;
    cin >> n;

    while(n--) {
        for(int i=0; i<3; i++) {
            cin >> arr[i];
            if(arr[i] == 1){
                cnt++;
            }
        }
        if(cnt >= 2){
            mainCnt++;
        }
        cnt = 0;

    }
    cout << mainCnt << endl;

    return 0;
}

