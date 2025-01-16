#include<iostream>
#include<climits>

using namespace std;

void LinearSearch(int arr[], int n, int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout << "Found at index " << i;
            return;
        }
    }
    cout << "Not Found" << endl;
}

void FindMaximum(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout << "Max Ele : " << maxi << endl;    
}

void ExtremePrinting(int arr[], int n){
    int i=0;
    int j=n-1;

    while(j>=i){
        cout << arr[i] << " ";
        i++;
        if(j>i){
            cout << arr[j] << " ";
            j--;
        }
    }
}

void ReverseArray(int arr[], int n){
    int i=0;
    int j=n-1;

    while(j>i){
        swap(arr[i],arr[j]);
        i++;
        j--;
        //swap(arr[i++], arr[j--]);
    } 

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void SwapMethods(int a, int b){
    // Using built in function
    swap(a,b);

    // Using temp variable
    int temp = a;
    a = b;
    b = temp;

    // Arithmetic approach
    a = a+b;
    b = a-b;
    a = a-b;

    // XOR bitwise
    a = a^b;
    b = b^a;
    a = a^b;
    /* working !!IMPORTANT
    a=a⊕b => a=6⊕9  => 0110⊕1001=1111 => 𝑎=15
    b=b⊕a => b=9⊕15 => 1001⊕1111=0110 => b=6
    a=a⊕b => a=15⊕6 => 1111⊕0110=1001 => a=9

    */
}

int main(){

    int arr[6] = {9,5,4,2,1,8};
    int n = 6;

    // LinearSearch(arr, n, 5);
    // FindMaximum(arr,n);
    // ExtremePrinting(arr, n);
    // ReverseArray(arr, n);

    // SwapMethods(6,9); //IMPORTANT

    return 0;
}