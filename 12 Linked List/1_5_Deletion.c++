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
    }
}

void print(Node *head)
{
    Node *temp = head;
    // uptill temp is not equal to null print and increase
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head)
{

    // empty LL
    if (head == NULL)
    {
        cout << "Nothing to delete";
        return;
    }

    else
    {
        if (position == 1)
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }

        else
        {
            Node *temp = head;
            for (int i = 0; i < position - 2; i++)
            {
                temp = temp->next;
            }
            Node *curr = temp->next;
            temp->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{
    Node *head = NULL;

    insertAtTail(100, head);
    insertAtTail(110, head);
    insertAtTail(210, head);
    insertAtTail(310, head);
    insertAtTail(410, head);
    print(head);

    deleteNode(2, head);

    print(head);

    return 0;
}