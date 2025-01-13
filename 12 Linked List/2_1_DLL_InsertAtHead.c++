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
 
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main(){

    Node* head=NULL;

    insertAtHead(10, head);
    insertAtHead(20, head);
    insertAtHead(30, head);
    insertAtHead(40, head);
    insertAtHead(50, head);

    print(head);
    printReverse(head);

    return 0;
}