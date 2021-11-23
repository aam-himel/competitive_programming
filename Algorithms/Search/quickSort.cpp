#include<bits/stdc++.h>
using namespace std;

 int _partition(vector<int> &nums, int l, int r){
    int piv = nums[r];
    cout << "piv = " << piv << endl;
    int i = l - 1;

    for(int j=l; j<r; j++){
        if(nums[j] < piv){
            i++;
            swap(nums[i], nums[j]);
            cout << "nums[i] and nums[j] " << nums[j] << ", " << nums[i] << endl;
        }
        //cout << "swap i+1 and piv = " << nums[i+1] << ", " << piv << endl;
    }
     swap(nums[i+1], nums[r]);
    return i+1;
 }

void quickSort(vector<int> &nums, int l, int r){
    if(l < r){
        int q = _partition(nums, l, r);
        quickSort(nums, l, q - 1);
        quickSort(nums, q + 1, r);
    }
}

int main()
{
    vector<int> nums = {-1, 33, 22, 12, -4, 3};
    int n = nums.size();

    quickSort(nums, 0, n-1);

    for(int i=0; i<n; i++){
        cout << i << ", "<<  nums[i] << endl;
    }

    return 0;
}
