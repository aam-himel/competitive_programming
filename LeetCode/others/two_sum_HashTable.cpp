#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

}

int main()
{
    vector<int, int> nums = {2,7,11,15};
    int target = 9;

    vector<int,int> res = twoSum(nums, target);
    for(auto a:res){
        cout << a << endl;
    }
    return 0;
}
