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

void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
};

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *newNode = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    // newNode->next = head;
    // temp->next = newNode;
    temp->next = newNode;
    newNode->next = head;
};

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << "[ " << temp->data << " | " << temp->next << "] "
             << "->";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
};

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    return 0;
}