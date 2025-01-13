#include<iostream>
using namespace std;

class Stack{
public:
    int size; //stack's size
    int* arr; //dynamic array to be used as stack
    int top;  //top index

    Stack(int capacity){
        arr = new int[capacity]; //dynamic array
        size = capacity;
        top = -1;
    }

    //push operation
    void push(int value){
        if(top == size-1)
            cout << "Stack Overflow\n";
        else{
            top++;
            arr[top] = value;
        }
    }

    void pop(){
        if(top==-1){
            cout << "Stack UnderFlow\n";
        }
        else{
            arr[top] = -1; //just for visualization
            top--;
        }
    }

    int getSize(){
        int StackSize = top+1; //as for 1 element top=0
        return StackSize;
    }

    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }

    int getTop(){
        if(top==-1){
            cout << "No element in stack\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){

    Stack st(5);
    st.print();
    
    st.pop();

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.print();

    st.push(60);

    cout << st.getTop() << endl;
    cout << st.getSize() << endl;
    cout << st.isEmpty() << endl;

    return 0;
}