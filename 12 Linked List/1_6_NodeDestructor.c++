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

    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Destructed";
    }
};

int main(){

    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    first->next = second;
    second->next = third;

    cout << first->data << "->" << second->data << "->" << third->data;

    return 0;
}