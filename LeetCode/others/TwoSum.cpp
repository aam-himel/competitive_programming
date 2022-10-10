/*
    Problem Link: https://leetcode.com/problems/two-sum/
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> newVec;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                newVec.push_back(i);
                newVec.push_back(j);
                return newVec;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> v = twoSum(nums, target);

    cout << v[0] << "," << v[1];

    return 0;
}
