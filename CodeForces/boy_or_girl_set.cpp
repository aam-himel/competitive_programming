#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    set <char> name;

    for(auto i: str){
        name.insert(i);
    }

    if(name.size()%2 == 0){
        cout << "CHAT WITH HER!\n";
    }else {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}
