#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node* &head) 
{    
    if(head==NULL)
    {
        Node* NewNode = new Node(value);
        head = NewNode;
    }

    else 
    {
        Node* NewNode = new Node(value);
        NewNode->next = head;
        head = NewNode;
    }
}

void insertAtEnd(int value, Node* &head)
{
    if(head==NULL)
    {
        Node *NewNode = new Node(value);
        head = NewNode;
    }
    else
    {
        Node *NewNode = new Node(value);

        Node* temp = head;
        while (temp->next !=NULL)
        {
            temp = temp->next;
        }

        temp->next = NewNode;
    }
}

int getLength(Node *head)
{
    int len = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPos(int pos, int value, Node *&head)
{
    int len = getLength(head);

    if (pos == 1)
        insertAtHead(value, head);

    else if (pos == len + 1)
        insertAtEnd(value, head);

    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }

        Node *NewNode = new Node(400);

        NewNode->next = temp->next;
        temp->next = NewNode;
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
    Node *tail = NULL;

    insertAtHead(100, head);
    insertAtHead(110, head);
    insertAtHead(210, head);
    insertAtHead(310, head);
    insertAtHead(410, head);
    print(head);

    insertAtPos(5, 400, head);
    cout << "\nAfter Insertion\n";
    print(head);

    return 0;
}