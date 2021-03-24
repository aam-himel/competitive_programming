#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int> >
    nums = {
        {1, 3},
        {2, 2},
        {3, 1}
    };

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            cout << nums[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}
