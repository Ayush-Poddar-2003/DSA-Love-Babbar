#include<iostream>
#include<limits.h>
using namespace std;

int printDigit(int input) 
{
    if(input==0)
        return 0;

    printDigit(input/10);

    int digit = input%10;
    cout << digit << endl;
}


int main(){
   
    int input = 659843;

    printDigit(input);

    return 0;
}