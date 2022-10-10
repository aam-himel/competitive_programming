#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, a, b, k;
    while(t--){

        cin >> x >> y >> a >> b >> k;

        x = x  + (k * a);
        y = y + (k * b);

        if(x == y){
             cout << "SAME PRICE\n";
        }else if(x > y){
            cout << "PETROL\n";
        }else {
            cout << "DIESEL\n";
        }
    }
    return 0;
}
