#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    int n=arr.size();

    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for(auto it:arr){
        cout << it << " ";
    }

}

int main(){

    vector<int> arr = {4, 6, 9, 8, 1, 3};

    InsertionSort(arr);

    return 0;
}