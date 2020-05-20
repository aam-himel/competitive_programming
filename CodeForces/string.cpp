#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, len = 0;
    char str[105];
    cin >> n;
    getchar();

    while(n--) {
        scanf("%s", str);
        len = strlen(str);
        if(len > 10){
            cout << n[0] << len-2 << str[len-1] << "\n";
        }else {
            cout << str << "\n";
        }
    }
    return 0;
}
