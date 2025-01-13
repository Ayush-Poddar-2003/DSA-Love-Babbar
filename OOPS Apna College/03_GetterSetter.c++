#include<iostream>
using namespace std;

class Hero
{
        int health;
    public:
        int age;

    void sethealth(int h){
        health = h;
    }

    void setage(int a){
        age = a;
    }

    int gethealth(){
        return health;
    }

    int getage(){
        return age;
    }
};

int main()
{
    Hero h1;

    // h1.health = 10; //will show error as pvt
    // h1.age = 9;
    // cout << h1.health;
    // cout << h1.age;

    //---------------------------------------

    h1.sethealth(10);
    h1.setage(9);
    cout << h1.gethealth() << endl;
    cout << h1.getage() << endl;

    return 0;
}