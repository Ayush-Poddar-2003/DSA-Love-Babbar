#include<iostream>
using namespace std;

class Stack{
public:
    int* arr; //dynamic array to be used as stack
    int size; //stack's size
    int topInd;  //top index

    Stack(int capacity){
        arr = new int[capacity]; //dynamic array
        size = capacity;
        topInd = -1;
    }

    //push operation
    void push(int value){
        if(topInd == size-1)
            cout << "Stack Overflow\n";
        else{
            topInd++;
            arr[topInd] = value;
        }
    }

    void pop(){
        if(topInd==-1){
            cout << "Stack UnderFlow\n";
        }
        else{
            arr[topInd] = -1; //just for visualization
            topInd--;
        }
    }

    int getSize(){
        int StackSize = topInd + 1; //as for 1 element topInd=0
        return StackSize;
    }

    bool isEmpty(){
        if(topInd==-1) 
            return true;
        else 
            return false;
    }

    int gettopInd(){
        if(topInd==-1){
            cout << "No element in stack\n";
            return -1;
        }
        else{
            return arr[topInd];
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

    cout << st.gettopInd() << endl;
    cout << st.getSize() << endl;
    cout << st.isEmpty() << endl;

    return 0;
}