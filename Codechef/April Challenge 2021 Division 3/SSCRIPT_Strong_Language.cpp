/*
    Author : aamHimel
*/

#include <bits/stdc++.h>
using namespace std;

bool isTrue(int n, int k, string &str) {
    bool res = false;
    int cnt = 0;
    for(int i=0; i<n; i++){

        if(str[i] != '*' && res == true ){
            cnt = 0;

        }
        if(str[i] == '*'){
            cnt = cnt + 1;
            if(cnt == k) return true;
            res = true;
        }


    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    string str;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        cin >> str;
        int cnt = 0;
        if(isTrue(n, k, str)){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }


    }
    return 0;
}
