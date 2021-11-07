#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* reverseList(Node *head) {
    Node *prv = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while(curr != nullptr) {
        next = curr->next;
        curr->next = prv;
        prv = curr;
        curr = next;
    }
    return prv;
}

void print(Node *head) {
    while(head!= nullptr){
        cout << head->data << endl;
        head = head->next;
    }
}


int main()
{
    Node *head = nullptr;
    Node *second = nullptr;

    head = new Node();
    second = new Node();

    head->data = 3;
    head->next = second;

    second->data = 5;
    second->next = NULL;

    print(head);



    cout << "\nAfter Reverse\n";
    Node *newHead = reverseList(head);
    print(newHead);


    return 0;
}
