#include <iostream>
#include <vector>

using namespace std;

class MyHashSet
{

public:
    vector<int> hash_table;
    vector<int>::iterator itr;
    MyHashSet()
    {
    }

    void add(int key)
    {
        int s = hash_table.size();
        int location = key % s;
        hash_table[location] = key;
        cout << "The Added Key is " << key << "\n";
    }

    void remove(int key)
    {
    }
    bool contains(int key) {}
    void showHash()
    {
        for (itr = hash_table.begin(); itr != hash_table.end(); ++itr)
        {
            cout << hash_table.size();
        }
    }
};

int main()
{
    MyHashSet h;
    h.add(1);
    h.add(12);
    h.add(13);
    h.add(15);
    h.add(17);

    h.showHash();
    return 0;
}