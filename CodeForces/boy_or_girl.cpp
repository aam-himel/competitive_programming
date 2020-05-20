#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0;

    sort(str.begin(), str.end());
    for(int i=0; i < str.length(); i++){
        if(str[i] == str[i+1]){
            cnt++;
        }
    }

    if((str.length() - cnt)%2 == 0){
        cout << "CHAT WITH HER!\n";
    }else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}
