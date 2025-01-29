#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Insert at head = push
void push(int data, Node* &head){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

//Delete first element = pop
void pop(Node* &head){
    if(head == NULL){
        cout << "Empty Stack\n";
    }
    else{
        Node* temp = head;
        head = head->next;
        delete(temp);
    }
}

void printStack(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    
    printStack(head);
    push(50, head);
    printStack(head);
    push(60, head);
    printStack(head);
    push(70, head);
    printStack(head);
    push(80, head);
    printStack(head);
    pop(head);
    printStack(head);
    pop(head);
    printStack(head);
    pop(head);
    printStack(head);
    pop(head);
    pop(head);

    return 0;
}