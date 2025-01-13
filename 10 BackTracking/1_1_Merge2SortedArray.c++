#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArrays(int arr[], int n, int brr[], int m, vector<int> &ans)
{
    int i=0, j=0;
    while(i<n && j<m){
        if(arr[i]<=brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    while(i<n){
        ans.push_back(arr[i]);
        i++;
    }

    while(j<m){
        ans.push_back(brr[j]);
        j++;
    }
}



int main()
{
    int arr[] = {20,40,60,80,90,100};
    int n = 6;

    int brr[] = {10,30,50,70};
    int m = 4;

    vector<int> ans;

    mergeSortedArrays(arr, n, brr, m, ans);

    for(int nums: ans){
        cout << nums << " ";
    }


    return 0;
}