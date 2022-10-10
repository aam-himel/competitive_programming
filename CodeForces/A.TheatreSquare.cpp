#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long m, n, a;
    cin >> n >> m >> a;
    unsigned long long result = ceil((double)n/a) * ceil((double)m/a);
    cout << result << endl;
    return 0;
}
