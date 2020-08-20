/*
    Problem Link:
    Author: aam Himel
*/

#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i= m -1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >=0 && j >= 0){
            if(nums1[i] > nums2[j] ){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr;


    mergeArray(arr);
    return 0;
}


/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i= m -1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >=0 && j >= 0){
            if(nums1[i] > nums2[j] ){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

*/
