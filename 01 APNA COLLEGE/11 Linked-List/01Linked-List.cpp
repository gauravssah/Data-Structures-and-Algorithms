#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};

void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

bool searching(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletionInList(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;

    if (temp->data == val)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;

        return;
    }

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *deletingNode = temp->next;
    temp->next = temp->next->next;
    delete deletingNode;
};

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
};

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    insertAtHead(head, 0);
    insertAtHead(head, 10);
    insertAtHead(head, 20);

    display(head);
    cout << "After deleting." << endl;
    deletionInList(head, 20);

    display(head);

    if (searching(head, 40))
    {
        cout << "Found." << endl;
    }
    else
    {
        cout << "Not Found!!" << endl;
    }

    return 0;
}