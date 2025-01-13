#include<iostream>
using namespace std;

int GetSum(int n){
    //base case
    if(n==1) return 1;
    //recursive call
    int ans = n + GetSum(n-1);
    //processing
    return ans;
}

int main(){
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    cout << GetSum(n);

    return 0;
}