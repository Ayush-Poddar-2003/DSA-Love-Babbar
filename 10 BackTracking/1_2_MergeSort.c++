#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{
    //Creating empty left and right arrays
    int leftlength = mid-s+1;
    int rightlength = e-mid; //use pen paper
    int *leftArr = new int[leftlength];
    int *rightArr = new int[rightlength];

    //Copying original values
    int index = s; //to iterate original array
    for(int i=0;i<leftlength;i++){
        leftArr[i] = arr[index];
        index++;
    }
    index=mid+1;
    for(int i=0;i<rightlength;i++){
        rightArr[i] = arr[index];
        index++;
    }

    //merging left and right according to order -----
    int i = 0;
    int j = 0;
    int mainArrayindex = s;

    while(i<leftlength && j<rightlength){
        if(leftArr[i]<rightArr[j]){
            arr[mainArrayindex] = leftArr[i];
            mainArrayindex++;
            i++;
        }
        else{
            arr[mainArrayindex] = rightArr[j];
            mainArrayindex++;
            j++;
        }
    }

    while(i<leftlength){
        arr[mainArrayindex] = leftArr[i];
        mainArrayindex++;
        i++;
    }

    while(j<rightlength){
        arr[mainArrayindex] = rightArr[j];
        mainArrayindex++;
        j++;
    }

    //deleting heap memory
    delete[] leftArr;
    delete[] rightArr;

}

void mergeSort(int arr[], int s, int e){
    //base case
    if(s>=e)
        return;
 
    int mid = (s+e)/2;
    //left part recursion se solve
    mergeSort(arr, s, mid);
    //right part recursion se solve
    mergeSort(arr, mid+1, e);

    //Sorted part ko merge
    merge(arr,s,e,mid);
}

int main()
{
    int arr[] = {10,80,110,90,50,30,40,20};
    int size = 8;

    int s = 0;
    int e = size-1;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    mergeSort(arr, s, e);

    cout << "\nAfter Sorting\n";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}