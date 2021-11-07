#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {5, 3,4,5,6,7,8,9};
    for(int i=0; i < v.size();i++){
        if(i % 2 == 0){
            v[i] = v[i] * v[i];
        }
    }

    for(auto i : v){
        cout << i << "\n";
    }
    return 0;
}
