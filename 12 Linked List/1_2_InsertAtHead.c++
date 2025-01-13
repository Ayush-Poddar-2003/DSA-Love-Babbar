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


void insertAtHead(int value, Node* &head) //head orginal me change aayenge
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


void print(Node* head)
{
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl ;
}


int main()
{
    //Initially no node
    Node *head = NULL;

    insertAtHead(10, head);
    print(head); // 10->NULL

    insertAtHead(20, head);
    print(head); // 20->10->NULL

    insertAtHead(30, head);
    print(head); // 30->20->10->NULL

    return 0;
}