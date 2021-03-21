/*
    Author : aamHimel
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {12, 4, 32, 56, 1};
    auto it = *max_element(nums.begin(), nums.end());
    cout << it;
    return 0;
}

