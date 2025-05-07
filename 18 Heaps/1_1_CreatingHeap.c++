#include<iostream>
using namespace std;

class Heap{
public:
    int *arr;
    int capacity;
    int index;

    Heap(int capacity){
        this->capacity = capacity;
        arr = new int[capacity]();
        index=0;
    }

    void printHeap(){
        for(int i=0;i<capacity; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insert(int val){
        if(index==capacity-1) {
            cout << "Overflow" << endl;
            return;
        }

        //if space available
        index++;
        arr[index] = val;

        //putting node to correct pos by comparing from parent node
        int i=index;
        while(i>1)
        {
            int pindex = i/2;
            if(arr[i]>arr[pindex]){
                swap(arr[i],arr[pindex]);
                i = pindex;
            }
            else{
                break;
            }
        }
    }

    void delete(){
        //1. Replace root with last rightmost node
        //2. n--||index--
        //3. Heapify arr[1] element 
    }

    void heapify(int *arr, int n, int currIndex){
        int i = currIndex;
        int leftindex = 2*i;
        int rindex = 2*i+1;

        int largestindex = i;
        if(leftindex<n && arr[leftindex]>arr[largestindex]){
            largestindex = leftindex;
        }
        if(rindex<n && arr[rindex]>arr[largestindex]){
            largestindex = rindex;
        }

        if(largestindex!=i){
            swap(arr[i], arr[largestindex]);
            i=largestindex;
            heapify(arr, n , i);
        }
    }
};


int main()
{
    Heap pq(10);
    pq.insert(10);
    pq.printHeap();
    pq.insert(20);
    pq.printHeap();
    pq.insert(30);
    pq.printHeap();
    pq.insert(40);
    pq.printHeap();
    pq.insert(50);
    pq.printHeap();

    return 0;
}