#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr, n, front, rear;

public:
    CircularQueue(int size)
    {
        arr = new int[size]{0};
        this->n = size;
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        // case1: OverFlow
        if ((front == 0 && rear == n-1) || (rear == front-1))
            cout << "overflow" << endl;
        
        // case2: First element
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // case3 : Refilling, circular nature
        else if (rear == n-1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }

        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pop()
    {
        // case1: UnderFlow
        if (front == -1 && rear == -1)
            cout << "Underflow" << endl;

        // case2: single element
        else if (front == rear)
        {
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        // circular nature
        else if (front == n - 1)
        {
            arr[front] = 0;
            front = 0;
        }
        // normal case
        else
        {
            arr[front] = 0;
            front++;
        }
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty";
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        // HW
        if (rear == -1)
            cout << "Queue is empty";
        else
            return arr[rear];
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        // normal
        else if (rear >= front)
            return rear - front + 1;
        // circular case
        else
            return n - front + rear + 1;
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    
    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q(5);
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
    q.push(60);

    q.pop();
    q.print();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    return 0;
}