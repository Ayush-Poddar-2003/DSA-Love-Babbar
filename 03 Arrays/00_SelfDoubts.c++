#include<iostream>
using namespace std;

int main(){

    // // int arr1[];
    // int arr2[5];
    // int arr3[] = {1, 2, 3};
    // int arr4[3] = {1, 2, 3};
    // int arr5[5] = {1, 2, 3};

    // cout << arr5[11];

    // // int arr6[2] = {1, 2, 3};

    // for(int i=0;i<7;i++){
    //     cout << arr5[i] << endl;
    // }

    int n = 11;

    int *brr = new int[n];

    for(int i=0;i<n;i++){
        cout << brr[i] << endl;
    }

    return 0;
}