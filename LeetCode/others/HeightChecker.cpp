/*
    Problem Name:  Height Checker
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights)
{
    int i, j, cnt=0;
    int s = heights.size();
    vector<int> v(s, 0);

    for(i=0; i<s; i++){
        v[i] = heights[i];
    }

    sort(v.begin(), v.end());

    for(j=0; j<s; j++){
        if(v[j] != heights[j])
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1,2,3,4,5 / 1,1,4,2,1,3
    vector<int> v = {1,1,4,2,1,3};
    cout << "Number of Changes required is = " << heightChecker(v) << "\n";

    return 0;
}
