#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h[35], a[35], res = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> h[i] >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(h[i] == a[j]) res++;
        }
    }
    cout << res << endl;
    return 0;
}
