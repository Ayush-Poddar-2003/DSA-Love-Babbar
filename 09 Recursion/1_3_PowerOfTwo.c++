#include<iostream>
using namespace std;

int powerOfTwo(int n){
    //base case
    if(n==0) return 1;
    //recursive call
    int ans = 2 * powerOfTwo(n-1);
    //processing
    return ans;
}

int main(){
    int n;
    cout << "Enter Power: " << endl;
    cin >> n;

    int ans = powerOfTwo(n);
    cout << ans;
    return 0;
}