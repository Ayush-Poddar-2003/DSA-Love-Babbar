#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};


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


void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node* head = NULL;

    insertAtEnd(100, head);
    print(head);

    insertAtEnd(110, head);
    print(head);

    insertAtEnd(210, head);
    print(head);

    return 0;
}