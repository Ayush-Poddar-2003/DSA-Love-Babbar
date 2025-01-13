#include<iostream>
using namespace std;

class Hero{
    
        int health; //defualt is pvt only with in class
    
    public:
        int age;

    void print(){
        cout << health;
    }
};

int main()
{
    Hero ramesh;
    cout << ramesh.health; //giving error because private
    cout << ramesh.age;

    // SIZE OF EMPTY CLASS IS ALWAYS 1 !!!!!

    return 0;
}