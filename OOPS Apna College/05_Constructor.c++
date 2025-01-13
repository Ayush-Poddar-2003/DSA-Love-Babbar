#include<iostream>
using namespace std;

class Hero
{
    public:
     Hero(){
        cout << "Constructor called automatically";
     }

};

int main()
{
    //static
    Hero h1;

    //dynamic
    Hero *h2 = new Hero;

 // both cases hero() will called automatically

    return 0;
}