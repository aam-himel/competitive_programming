#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// O(n^2)
/*
int numIdenticalPairs(vector<int>& nums) {
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=1; j<nums.size(); j++){
                cout << "nums[i] = " << nums[i] << ", nums[j] = " << nums[j] << "\n";
            if(nums[i] == nums[j] && i < j) cnt++;
        }
    }
    return cnt;
}
*/
// O(n)
 int numIdenticalPairs(vector<int>& A) {
        int res = 0;
        unordered_map<int, int> cnt;
        for (int a: A) {

            res += cnt[a]++;
            cout << cnt[a] << " , res = " << res << "\n";
        }
        return res;
    }


int main()
{
    vector<int> nums = {1,2,3,1,1,3};
    cout << numIdenticalPairs(nums);

    return 0;
}
