# SELECTION SORT
Repeatedly find the minimum element from the unsorted part and move it to the beginning.

**TC**: Best, Average, Worst: O(n²)  
**SC**: O(1)

```c++
void SelectionSort(vector<int> &arr)
{
    int n=arr.size();

    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[mini] > arr[j])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}
```