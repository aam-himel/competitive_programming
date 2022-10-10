/*
    Problem Link:
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& A)
{
    for(int i=0; i<A.size(); i++){
        A[i] = A[i] * A[i];
    }

    sort(A.begin(), A.end());
    for(int i=0; i<A.size(); i++){
        cout << A[i] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {-4,-1,0,3,10};
    sortedSquares(v);

    return 0;
}
