#include<iostream>
using namespace std;

int getFactorial(int n)
{
    //base case
    if( n==0 || n==1 ) 
        return 1;

    //recursive call
    int finalAns = n * getFactorial(n-1);
    
    return finalAns; 
}

int main(){
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;

    int ans = getFactorial(n);

    cout << "Factorial of " << n << " is: " << ans;

    return 0;
}