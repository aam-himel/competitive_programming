#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &v, int key) {
    for(int i=0; i<v.size(); i++)
    {
        if(key == v[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {12, 33, 4, 55, -5, 14};
    cout << linearSearch(arr, 100);

    return 0;
}
