/* BUBBLE SORT
-> Swapping Adjacent till greatest reaches last, size--

-> TC : O(n^2) : Avg and Worst
        O(n)   : Best
-> SC : O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    int flag = 0;

    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if( arr[j]>arr[j+1] )
            {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break; //all smaller on left
    }
}

int main()
{
    vector<int> arr={2,9,4,1};
    bubbleSort(arr, arr.size());

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}