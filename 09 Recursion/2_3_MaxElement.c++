#include<iostream>
#include<limits.h>
using namespace std;

void SearchinArray(int arr[], int size, int index,int &maxi) // end waala ans store krna h isliye by reference
{
    if(index == size) return;
    maxi = max(maxi, arr[index]);
    SearchinArray(arr,size,index+1,maxi);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int maxi = INT_MIN;

    SearchinArray(arr,size,index,maxi);

    cout << "Maximum Element is : " << maxi;
    return 0;
}