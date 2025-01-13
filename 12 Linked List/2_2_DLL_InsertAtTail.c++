#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtTail(int value, Node *&head)
{
    if (head == NULL)
    {
        Node *NewNode = new Node(value);
        head = NewNode;
    }
    else
    {
        Node *NewNode = new Node(value);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
        NewNode->prev = temp;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    insertAtTail(10, head);
    insertAtTail(20, head);
    insertAtTail(30, head);
    insertAtTail(40, head);

    print(head);

    return 0;
}