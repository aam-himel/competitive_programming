#include<bits/stdc++.h>
using namespace std;

int numberOfMatches(int n)
{
    int res = 0;
    while(n)
    {
        if(n == 1){
                res += (n-1)/2;
            return  res;
        }

        cout << "N = " << n << endl;
        if(n%2 == 0){
            res += n/2;
            n = n/2;

        }else{
            res += (n-1)/2 ;
            n = (n-1)/2 + 1;
        }
    }
    return res;
}

int main()
{
    int n = 14;
    cout << "Result = " << numberOfMatches(n);
    return 0;
}
