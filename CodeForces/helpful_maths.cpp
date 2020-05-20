#include<bits/stdc++.h>
using namespace std;

int main()
{

    char arr[105];
    int len, i;
    int cnt1,cnt2,cnt3;
    cnt1 = cnt2 = cnt3 = 0;

    cin >> arr;

    len = strlen(arr);

    for(i=0; i<len; i++){
        if(arr[i] == '1') cnt1++;
        if(arr[i] == '2') cnt2++;
        if(arr[i] == '3') cnt3++;
    }

    for(i=0; i<cnt1; i++){
        cout << '1';
        if((cnt2 == 0 && cnt3 == 0)&& i == cnt1 -1){
            cout << endl;
        }else{
            cout << '+';
        }
    }

    for(i=0; i<cnt2; i++){
        cout << '2';
        if((cnt3 == 0) && i == cnt2 - 1){
            cout << endl;
        }else{
            cout << '+';
        }
    }

    for(i=0; i<cnt3; i++){
        cout << '3';
        if(i == cnt3 -1){
            cout << endl;
        }else{
            cout << '+';
        }
    }


    return 0;
}
