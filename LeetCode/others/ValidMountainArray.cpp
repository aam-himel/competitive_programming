/*
    Problem Name: Valid Mountain Array
    Solution Concept: It's like two people climbing on a hill, if two people reach
                      at the top then they definitely meet at some point. which is
                      i == j in this program

    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& A) {
        int len = A.size();
        int i = 0, j = len - 1;
        if(len < 3 ) return false;
        while(i+1 < len && A[i] < A[i+1]){
            i++;
            cout << "A[i] < A[i+1] passed i = " << i << "\n";
        }

        cout << "============ First loop finished ================\n";

        while(j > 0 && A[j-1] > A[j]) {
            j--;
            cout << "A[j-1] > A[j] passed j = " << j << "\n";
        }
        cout << "============ 2nd loop finished ================\n";
        cout << "i = " << i << ", j = " << j << "\n";
        return i > 0 && i == j && j < len - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,1,2,3,4,5,6,5,4};
    if(validMountainArray(v)){
        cout << "\nTRUE\n";
    }else {
        cout << "\nFalse\n";
    }

    return 0;
}
