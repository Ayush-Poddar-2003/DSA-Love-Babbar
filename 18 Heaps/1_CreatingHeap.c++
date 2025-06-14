#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1; //To start index from 1
        int index = size;
        arr[index] = val;
        //finding parent element and swapping if needed
        while(index>1) //As 1 is root element
        { 
            int parentIndex = index/2;
            if(arr[parentIndex]<arr[index]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex; //cox in next loop it will check above parent
            }
            else return;    
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

    void delete(){
        
    }


};

int main(){

    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    return 0;
}