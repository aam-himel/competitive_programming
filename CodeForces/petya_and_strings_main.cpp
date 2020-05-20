#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    // Converting string a to uppercase
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    // Converting string b to uppercase
    transform(b.begin(), b.end(), b.begin(), ::toupper);

    if(a < b) {
        cout << -1;
    }else if(a > b) {
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}

