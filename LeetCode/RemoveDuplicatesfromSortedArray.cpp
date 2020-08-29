/*
    Problem Name: Remove Duplicates from Sorted Array Solution
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int s = nums.size();
        for(int i=1; i < s-1; i++){
            if(nums[i] != nums[i+1]){
                nums[index] = nums[i+1];
                index++;
            }
        }

        for(auto i:nums) {
            cout << "\nsingle element = "  << i << endl;
        }
        return index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,0,1,1,1,2,2,3,3,4};
    int n = removeDuplicates(v);
    cout << "this is funtion call = " << n;

    return 0;
}
