// Basic Implementation of Node and LL

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //Default
    Node(){
        this->next = NULL;
    }

    //Parameterized
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){

    Node aa; //Static Object
    cout << aa.data << endl; //Garbage Value

    //Dynamic
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    first->next = second;
    second->next = third;
    //No need to make third->next = NULL as done in constructor

    cout << first->data << "->" << second->data << "->" << third->data;

    return 0;
}