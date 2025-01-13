#include<iostream>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top1; //2 pointer approach
    int top2;

    Stack(int capacity){
        arr = new int(capacity);
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value){
        if(top2-top1==1){
            cout << "Stack1 overflow" <<  endl;
        }
        else{
            top1++;
            arr[top1] = value;
        }
    }

    void push2(int value){
        if(top2-top1==1){
            cout << "Stack2 overflow" <<  endl;
        }
        else{
            top2--;
            arr[top2] = value;
        }
    }

    void pop1(){
        if(top1==-1){
            cout << "Empty Stack 1";
        }
        else{
            top1--;
        }
    }

    void pop2(){
        if(top1==size){
            cout << "Empty Stack 2";
        }
        else{
            top2++;
        }
    }

    void printStack(){
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for(int i=0;i<size;i++){
            cout << arr[i] << " "; 
        }
        cout << endl << endl;
    }




};



int main(){
    Stack st(5);
    st.printStack();
    st.push1(1);
    st.push1(2);
    st.printStack();
    st.push2(10);
    st.push2(20);
    st.push2(30);
    st.push2(30);
    st.printStack();
    
    return 0;
}