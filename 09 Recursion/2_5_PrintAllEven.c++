#include<iostream>
#include<limits.h>
using namespace std;

void printAllEven(int arr[], int size, int index) {
    if(index == size) return;
    if(arr[index]%2!=0){
        cout << arr[index] << " ";
    }
    printAllEven(arr,size,index+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 0;

    printAllEven(arr,size,index);

    return 0;
}