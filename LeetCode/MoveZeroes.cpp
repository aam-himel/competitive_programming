/*
    Problem Name:   Move Zeroes
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int pos = 0, cnt = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0){
            nums[pos] = nums[i];
            pos++;
        }else {
            cnt++;
        }
    }

    for(int i= nums.size()- 1; i >=0; i--){
        if(cnt == 0){
            break;
        }
        nums[i] = 0;
        cnt--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,1,0,3,12};
    moveZeroes(v);

    for(int i: v){
        cout << i << endl;
    }
    return 0;
}
