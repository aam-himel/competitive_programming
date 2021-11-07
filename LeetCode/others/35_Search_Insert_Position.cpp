#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {

    int l = 0, r = nums.size() - 1;


    while(r >= l){
        int mid = l + (r - l)/2;
        cout << "mid = " << mid << endl;
        if(target == nums[mid]) return mid;
        else if(target < nums[mid]){
            r = mid - 1;
        }else if(target > nums[mid]){
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    vector<int> nums = {1, 3, 5, 7};
    int target = 8;

    cout <<"Result = "<< searchInsert(nums, target);
    return 0;
}
