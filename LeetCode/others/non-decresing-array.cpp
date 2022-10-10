#include<bits/stdc++.h>
using namespace std;

 bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0; i<=n-2; i++){
            if(nums[i] > nums[i+1]){
                cnt++;
                cout << "cnt = " << cnt << "\n";
            }
        }
        if(cnt > 1){
            return false;
        }else {
            return true;
        }
    }

int main()
{
    vector<int> nums = {3, 4, 2, 3};
    cout << checkPossibility(nums);
    return 0;
}
