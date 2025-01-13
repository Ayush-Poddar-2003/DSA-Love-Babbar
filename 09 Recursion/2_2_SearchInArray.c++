#include<iostream>
using namespace std;

bool SearchinArray(int arr[], int size, int index, int target){
    if(index==size) return false;
    if(arr[index] == target) return true;
    SearchinArray(arr,size,index+1,target);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int target = 60;

    cout << SearchinArray(arr,size,index,target);
    return 0;
}