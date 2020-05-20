#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int sum1 = 0, sum2 = 0;

    // Converting string a to uppercase
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    // Converting string b to uppercase
    transform(b.begin(), b.end(), b.begin(), ::toupper);

    // here UPPERCASE 'A' = 65

    for(int i=0; i<a.length(); i++){
        int temp = int(a[i]) - 64;
        sum1 += temp;
    }

    for(int i=0; i<b.length(); i++){
        int temp = int(b[i]) - 64;
        sum2 += temp;
    }

    if(sum1 > sum2){
        cout << 1;
    }else if(sum1 < sum2) {
        cout << -1;
    }else{
        cout << 0;
    }
    return 0;
}
