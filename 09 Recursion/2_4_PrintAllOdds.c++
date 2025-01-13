#include<iostream>
#include<limits.h>
using namespace std;

void printAllOdds(int arr[], int size, int index) {
    if(index == size) return;
    if(arr[index]&1){
        cout << arr[index] << " ";
    }
    printAllOdds(arr,size,index+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 0;

    printAllOdds(arr,size,index);

    return 0;
}