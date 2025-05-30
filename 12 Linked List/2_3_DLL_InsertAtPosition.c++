#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        this->data=value;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtHead(int value, Node* &head){
    if(head==NULL){
        Node* NewNode = new Node(value);
        head = NewNode;
    }
    else{
        Node* NewNode = new Node(value);
        NewNode->next=head;
        head->prev = NewNode;
        head = NewNode;
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
 
void print(Node* head){
    Node* temp = head; 
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head){
    Node* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtPosition(int pos, int value, Node* &head){
    int len = getLength(head);

    if(pos==1) insertAtHead(value,head);
    else if(pos==len+1) insertAtTail(value,head);

    else{
        Node* NewNode = new Node(value);
        Node* temp = head;
        for(int i=0;i<pos-2;i++){
            temp = temp->next;
        }

        Node* forward = temp->next;

        temp->next=NewNode;
        NewNode->prev=temp;

        forward->prev=NewNode;
        NewNode->next = forward;
    }
}

int main(){

    Node* head=NULL;
    Node* tail=NULL;

    insertAtTail(10, head);
    insertAtTail(20, head);
    insertAtTail(30, head);
    insertAtTail(40, head);
    insertAtTail(50, head);

    print(head);

    insertAtPosition(2, 69, head);
    print(head);

    return 0;
}