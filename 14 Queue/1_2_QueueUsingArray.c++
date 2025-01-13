#include<iostream>
using namespace std;

class Queue
{
    int *arr, n, front, rear;

public:
    Queue(int size){
        arr = new int[size]{0};
        n = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear==n-1)
            cout << "Overflow\n";
        else if(rear==-1&&front==-1){
            rear++;
            arr[rear] = val;
            front++;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
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

    int getSize(){
        if(front==-1 && rear==-1)
            return 0;
        return rear-front+1;
    }

    int getFront(){
        if(front==-1)
            cout << "Empty Queue\n";
        else   
            return arr[front];
    }

    int getRear(){
        if(rear==-1)
            cout << "No Element";
        else
            return arr[rear];
    }

    bool isEmpty(){
        if(front==-1 && rear==-1)
            return true;
        else 
            return false;
    }

    void print(){
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();

    cout << q.isEmpty() << endl;
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.getSize() << endl;

    q.push(60);

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();

    cout << q.getSize() << endl;

    return 0;
}