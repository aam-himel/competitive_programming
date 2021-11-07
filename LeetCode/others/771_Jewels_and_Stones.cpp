    /*
    Problem Link: https://leetcode.com/problems/jewels-and-stones/
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string J, string S) {

    int res = 0;
    unordered_map<char, int> cnt;
    unordered_map<char, int>::iterator it;
    for(int i=0; i<S.size(); i++){
        cnt[S[i]]++;
    }

    for(int i=0; i<J.size(); i++) {
        it = cnt.find(J[i]);
        if(it != cnt.end()){
            res += it->second;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string j, s;
    j = "Z";
    s = "aAAbbbb";

    cout << numJewelsInStones(j, s);

    return 0;
}
