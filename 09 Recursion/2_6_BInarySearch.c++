#include<iostream>
#include<limits.h>
using namespace std;

int binarySearch(int arr[], int size, int s, int e, int target) {
    int mid = (s+e)/2;
    
    if(s>e)
        return 0;

    if(arr[mid]==target){
        return mid;
    }

    if(target<arr[mid])
        binarySearch(arr, size, 0, mid-1, target);
    if(target>arr[mid])
        binarySearch(arr, size, mid+1, e, target);
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int target = 5;

    cout << binarySearch(arr,size,0,size-1,target);

    return 0;
}