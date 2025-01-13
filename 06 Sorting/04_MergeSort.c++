//Divide Sort Merge

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) 
{
    vector<int> temp; // temporary array

    int left = low;        // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high) 
    {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) 
    {
        arr[i] = temp[i - low];
    }
}


// Step 1
void mergeSort(vector<int> &arr, int s, int e) 
{
    //Base Case
    if(s>=e)
        return;

    int mid = (s+e)/2;
    
    //left part recursion se solve krwa
    mergeSort(arr, s, mid);
    //right part recusion se solve krwa
    mergeSort(arr, mid+1, e);

    //dono parts ko merge kr de
    merge(arr, s, mid, e);
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    mergeSort(arr, 0, n-1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}