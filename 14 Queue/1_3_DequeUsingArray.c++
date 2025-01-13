#include<iostream>
using namespace std;

class Deque
{
    int *arr, front, rear, n;
public:
    Deque(int size){
        this->n = size;
        arr =  new int[size]{0};
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
        if(front==0)
            cout << "Overflow\n";
        else if(front==-1 && rear==-1){
            front++;
            arr[front] = val;
            rear++;
        }
        else{
            front--;
            arr[front] = val;
        }
    }

    //Same as queue
    void pushBack(int val){
        if(rear==n-1)
            cout << "Overflow\n";
        else if(rear==-1 && front==-1){
            rear++;
            arr[rear] = val;
            front++;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    //Same as queue
    void popFront(){
        if(front==-1 && rear==-1)
            cout << "UnderFlow\n";
        else if(front==rear){
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = 0;
            front++;
        }
    }

    void popBack(){
        if(rear==-1)
            cout << "UnderFlow\n";
        else if(front==rear){
            arr[rear] = 0;
            front = -1;
            rear = -1;
        }
        else{
            arr[rear] = 0;
            rear--;
        }
    }

    void print(){
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Deque dq(5);

    dq.pushFront(10);
    dq.print();
    dq.pushFront(20);
    dq.print();
    dq.pushBack(30);
    dq.print();
    dq.pushBack(40);
    dq.print();
    dq.popBack();
    dq.print();
    dq.popFront();
    dq.print();
    dq.popBack();
    dq.print();

    return 0;
}