#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
    //this will create a single node with val and null ptr

    ~Node(){
        cout << "Node destructor called " << data << endl;
        if(next!=NULL){ //check if next connected
            delete next; // if yes delete the connected until last node
            next = NULL;
        }
    }
};

class List{
public:
    Node* head; //special head ptr
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
    }

    ~List(){
        cout << "List Destructor Called" << endl;
        if(head!=NULL){
            delete head; //deletes node head pointing to
            head=NULL;
        }
    }


    void push_front(int val){
        Node* newNode = new Node(val); //Node created

        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }


    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " -> ";
            temp = temp->next; 
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();

    return 0;
}