# INSERTION SORT
Builds the sorted array one element at a time by inserting each element into its correct position.

```c++
void InsertionSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

---

> TC -   
O(N^2) Average and worst   
O(N) Best

> SC -
O(1)