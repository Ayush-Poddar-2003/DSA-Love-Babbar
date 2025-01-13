#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n, int i){
    if(i==n-1)
        return true;
    
    if(arr[i]>arr[i+1]) 
        return false;
    
    checkSorted(arr, n, i+1);
}

int main(){
    int arr[] = {4,5,6,12,1};
    int size = 5;
    int index = 0;

    cout << checkSorted(arr, size, index);


    return 0;
}