
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, c;

    cin >> t;

    while(t--){

        cin >> c;
        string a, b;
        unsigned long long valueA, valueB;
        string str = bitset<32>(c).to_string();
        str.erase(0, str.find_first_not_of('0'));

        int j = 1;
        for(auto i:str) {

            if(i == '1' && j == 1){
                a.push_back('1');
                b.push_back('0');
            }else if(i == '1' && j > 1) {
                a.push_back('0');
                b.push_back('1');
            }else if(i == '0'){
                a.push_back('1');
                b.push_back('1');
            }
            j++;
        }

        valueA = stoull(a, 0, 2);
        valueB = stoull(b, 0, 2);

        /*
        cout << "ValueA = " << valueA << endl;
        cout << "ValueB = " << valueB << endl;
        cout << "C = " << str << endl << "a = " << a << endl << "b = " << b << endl;
        */
        cout << valueA * valueB << endl;
    }

    return 0;
}
