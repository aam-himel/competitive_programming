// Jump Search

#include <bits/stdc++.h>
using namespace std;

int jumpSearch(vector<int> arr, int key) {
    int n = arr.size();
    int step = sqrt(n);
    int prevStep = 0;
    for(int i=0; i<n; i+=step){
        if(arr[i] == key){
            return i;
        }else if(arr[i] > key){
            for(int j=prevStep; j < prevStep+ step;j++){
                if(arr[j] == key){
                    return j;
                }
            }
        }
        prevStep = i;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
    cout << jumpSearch(arr, 144);
    return 0;
}
