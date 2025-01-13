#include<iostream>
using namespace std;

int x = 2;

int main(){

    int x = 5;

    //It will access local
    cout << "x : " << x << endl;

    //To access Global
    cout << "x : " << ::x << endl;
 
    return 0;
}