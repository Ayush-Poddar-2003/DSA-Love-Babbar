#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int target){
    int s=0, e=n-1, ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout << target << " first found at index " << ans;
    return ans;
}

int LastOccurence(int arr[], int n, int target){
    int s=0, e=n-1, ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout << target << " last found at index " << ans << endl;
    return ans;
}

int main()
{
    int arr[]={10,20,20,20,20,20,20,30,40,50,60};
    int First = FirstOccurence(arr, 11, 20);
    int Last = LastOccurence(arr, 11, 20);

    cout << "Total Occurence : " << Last-First+1;
}