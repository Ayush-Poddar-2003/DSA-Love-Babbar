#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int *ptr = &a;
    int *qtr = ptr;
    int **rtr = &ptr;

    cout << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "ptr : " << ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    cout << "&ptr : " << &ptr << endl;
    cout << "qtr : " << qtr << endl;
    cout << "*qtr : " << *qtr << endl;
    cout << "&qtr : " << &qtr << endl;
    cout << "rtr : " << rtr << endl;
    cout << "*rtr : " << *rtr << endl;
    cout << "&rtr : " << &rtr << endl;

    return 0;
}