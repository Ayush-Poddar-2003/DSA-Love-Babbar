#include<iostream>
using namespace std;

class Hero{
    public:
        int health;
        char age;
};

int main()
{
    Hero h1;
    cout << "Size of h1 : " << sizeof(h1); //WHy 8 not 5

    // SIZE OF EMPTY CLASS IS ALWAYS 1 !!!!!

    return 0;
}