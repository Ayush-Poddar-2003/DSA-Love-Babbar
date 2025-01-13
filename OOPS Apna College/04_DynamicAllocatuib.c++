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
    //static
    Hero a;
    a.sethealth(90);
    a.setage(55);
    cout << a.gethealth() << endl;
    cout << a.getage() << endl;

    //dynamic
    Hero *b = new Hero;
    (*b).sethealth(70); //can't use b.sethealth as b stores address
    b->sethealth(79); //both above and this has same meaning
    b->setage(99);
    cout << b->gethealth() << endl;
    cout << b->getage() <<endl;


    return 0;
}