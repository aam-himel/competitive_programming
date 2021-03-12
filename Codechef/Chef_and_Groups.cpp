#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){

        int cnt = 0, current = 0;
        string s;
        cin >> s;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1' && current == 0){
                    cout <<
                cnt++;
                current = 1;
            }
            if(s[i] == '0' && current == '1'){
                current = 0;
            }
        }

        cout << "Result = "<< cnt << endl;
    }

    return 0;
}
