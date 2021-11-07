#include<bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int> &nums){
    vector<int> res;
    for(int i=0; i<nums.size()/2; i++){
        cout << "2 * i = " << 2 * i << endl;
        cout << "2 * i +  1 = " << 2 * i + 1 << endl;
        for(int j = 0; j<nums[2 * i]; j++){
            res.push_back(nums[2*i + 1]);
        }

    }
    return res;
}

int main()
{
    vector<int> nums = {1,1, 2, 3};
    nums = decompressRLElist(nums);
    for(auto i:nums){
        cout << i << endl;
    }

    return 0;
}
