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

int getLength(Node* head){
    int length=0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;
}

void Deletion(int postition, Node* &head, int length){
    if(postition==1){
        Node* temp = head;
        head=head->next;
        head->prev = NULL;
        temp->next =NULL;
        delete(temp);
    }

    if(postition==length){
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        Node* backward = temp->prev;
        backward->next = NULL;
        temp->prev = NULL;
        delete(temp);
    }

    else{
        Node* backward = head;
        for(int i=0;i<postition-2;i++){
            backward=backward->next;
        }
        Node* current = backward->next;
        Node* forward = current->next;
        backward->next = forward;
        forward->prev = backward;
        current->next = NULL;
        current->prev = NULL;
        delete(current);
    }
}

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

    int length = getLength(head);

    print(head);

    Deletion(4, head, length);

    print(head);

    return 0;
}