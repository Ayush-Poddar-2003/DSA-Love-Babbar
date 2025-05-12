# BUBBLE SORT

Simple comparison-based sorting algorithm, compares adjacent elements, and swaps them if they are in the wrong order.  
The largest element "bubbles" to the end of the array in each iteration.

----
```c++
void bubbleSort(vector<int> &arr)
{
    int n=arr.size();
    bool isSwapped = false; //If already sorted O(n)

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
                isSwapped = true;
            }
        }
        if(isSwapped==false) //No Swapping => Sorted
            break;
    }
}
```
> TC -   
O(N^2) Average and worst   
O(N) Best

> SC -
O(1)