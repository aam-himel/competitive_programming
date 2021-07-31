#include<bits/stdc++.h>

using namespace std;

struct node
{
    int value;
    node *next;
};

class linked_list
{
    node *head, *tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(int value)
    {
        node *temp = new node();
        temp->value = value;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;

        }
    }

    void printNode()
    {
        node *temp;
        temp = head;

        while(temp != NULL)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};



int main()
{
    linked_list l1, l2;
    l1.addNode(2);
    l1.addNode(3);
    l1.addNode(4);
    cout << "--------First list--------\n\n";
    l1.printNode();
    cout << "--------Second list--------\n\n";
    l2.addNode(2);
    l2.addNode(3);
    l2.addNode(4);

    l2.printNode();
    return 0;
}
