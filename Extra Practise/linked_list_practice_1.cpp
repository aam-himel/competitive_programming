
/*
    Author : aamHimel
*/

#include <bits/stdc++.h>
using namespace std;

struct node {
    int value;
    struct node *next;
};

class linkedList(){
    node *head, *tail;

    linkedList(){
        head = NULL;
        tail = NULL;
    }

    void addNode(int value){
        node *temp = new node;
        temp->value = value;
        temp->next = NULL;
    }
    if(head == NULL){
        head = temp;
        tail = temp;
    }else {
        head = temp;
        tail = tail->next;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    linkedList ls;
    ls.addNode(3);
    ls.addNode(32);
    ls.addNode(4);
    ls.addNode(6);



    return 0;
}
