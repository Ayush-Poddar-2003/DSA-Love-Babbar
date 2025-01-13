#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;

    //parametrized constructor
    Hero(int health)
    {
        cout << "this value : " << this;
        //this stores address of current object that is ramesh

        this->health = health;
    }

};

int main()
{
 
    Hero ramesh(10);
    cout << "\nAdress of ramesh : " << &ramesh << endl;

    return 0;
}