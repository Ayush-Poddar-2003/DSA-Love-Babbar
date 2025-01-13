/* SELECTION SORT
-> Swap first element with minimum, first element++ and repeat

-> TC : O(n^2) Best Average Worst
-> SC : O(1)
*/


#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &arr, int n)
{
    for(int i=0;i<n-1;i++) //Going till second last as last will automatically be sorted
    {
        int mini = i;

        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini])
                mini = j;
        }

        swap(arr[i], arr[mini]);
    }
}

int main()
{
    vector<int> arr = {10,2,21,3,9,1};

    SelectionSort(arr, arr.size());

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}