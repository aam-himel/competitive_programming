/*
    Problem Link: https://codeforces.com/problemset/problem/467/A
    Author: aam Himel
*/

#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, res = 0; cin >> n;
    vector<pair<int, int>> vp;
    for(int i=1; i<=n; i++){
        int p, q; cin >> p >> q;
        vp.push_back( make_pair(p, q));
    }

    for(int i=0; i<n; i++){
        if((vp[i].second - vp[i].first) >= 2){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
