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
};

class List{
public:
    Node* head; //special head ptr
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
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
    
    void push_back(int val){
        Node* newNode = new Node(val); //Node created

        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
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

    void insert(int pos, int val){
        Node* newNode = new Node(val);
        Node* prev =  head;
        for(int i=0;i<pos-1;i++){
            if(prev==NULL){
                cout << "Invalid Position";
                return;
            }
            prev = prev->next;
        }

        newNode->next = prev->next;
        prev->next = newNode;
    }

    void pop_front(){
        if(head==NULL) return;
        Node* temp=head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail = temp;
    }
};

int main()
{
    List ll;
    ll.push_front(5);
    ll.printList();
    ll.push_front(4);
    ll.printList();
    ll.push_back(6);
    ll.printList();
    ll.insert(1,69);
    ll.printList();
    ll.pop_front();
    ll.printList();
    ll.pop_back();
    ll.printList();
    return 0;
}