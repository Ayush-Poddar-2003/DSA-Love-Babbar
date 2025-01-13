#include<iostream>
using namespace std;

int Fibonacci(int n){
    //base case
    if(n==0 || n==1) return n;
    //recursive call
    int ans = Fibonacci(n-1) + Fibonacci(n-2);
    //processing
    return ans;
}

int main(){
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    cout << Fibonacci(n);

    return 0;
}