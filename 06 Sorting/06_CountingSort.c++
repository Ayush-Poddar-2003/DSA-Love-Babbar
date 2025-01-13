#include<iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int maxEle = arr[0];
    for(int i=0;i<n;i++){
        maxEle = max(maxEle,arr[i]);
    }

    int count[10] = {0}; //would have been count[size] but no dynamic allocation

    for(int i=0; i<n; i++){
        count[arr[i]]++; //us index pr uska count store kr dega
    }

    //Modification
    for(int i=1;i<=maxEle;i++){
        count[i] = count[i] + count[i-1]; 
    }

    //output !!!!
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i]; //First decrement then put in output arr
    }

    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}


int main(){

    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int n = 9;

    countSort(arr, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}