#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
public:
    Node *head;
    Node *tail;

    Queue(){
        head = tail = NULL;
    }

    //same as push_back
    void push(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool empty(){
        return head==NULL;
    }

    //same as pop_front
    void pop(){
        if(!empty()){
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else{
            cout << "Empty";
            return;
        }
    }

    int front(){
        if(!empty())
            return head->data;
        else 
            return -1;
    }
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}