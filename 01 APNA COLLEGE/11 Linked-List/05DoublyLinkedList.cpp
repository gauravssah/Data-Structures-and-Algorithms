#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAthead(node *&head, int val)
{
    node *newNode = new node(val);
    node *temp = head;

    newNode->next = temp;
    if (head != NULL)
    {
        temp->prev = newNode;
    }

    head = newNode;
};

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAthead(head, val);
        return;
    }

    node *newNode = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
};

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deleteAtPos(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
};

node *deleterAtVal(node *&head, int val)
{
    node *temp = head;

    while (temp->data != val)
    {
        temp = temp->next;
    }

    node *deleteNode = temp;
    temp->prev->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete deleteNode;
    return head;
};

void displayNodes(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "[ " << temp->prev << " | " << temp->data << " | " << temp->next << " ] "
             << "--> ";
        temp = temp->next;
    }

    cout << endl;
};

main()
{

    node *head = NULL;

    insertAthead(head, 1);
    insertAthead(head, 2);
    insertAthead(head, 3);
    insertAthead(head, 4);
    insertAthead(head, 5);

    // insertAtTail(head, 10);
    // insertAtTail(head, 20);
    // insertAtTail(head, 30);
    // insertAtTail(head, 40);
    // insertAtTail(head, 50);

    displayNodes(head);

    node *newHead = deleterAtVal(head, 1);
    cout << endl;
    displayNodes(newHead);
    cout << "Delete at given position" << endl;

    deleteAtPos(head, 3);
    displayNodes(head);

    return 0;
}