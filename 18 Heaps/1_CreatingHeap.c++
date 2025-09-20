#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size = 0; //As Empty

    heap(){
        arr[0] = -1; //We have to start from 1 index
        size = 0;
    }

    void insert(int val){
        size = size+1; //As inserting elementj
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

    //always root node is deleted
    void deleteRoot(){
        // 1. Assign last node value to parent
        arr[1] = arr[size]; //last node
        // 2. Remove last node, useless
        size--;
        // 3. Correct root node position acc to rules
        int i=1;
        while(i<size){
            int lIndex=2*i;
            int rIndex=2*i+1;

            if(lIndex<size && arr[i]<arr[lIndex]){
                swap(arr[i], arr[lIndex]);
                i = lIndex;
            }
            else if(rIndex<size && arr[i]<arr[rIndex]){
                swap(arr[i], arr[rIndex]);
                i = rIndex;
            }
            else
                return;
        }
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