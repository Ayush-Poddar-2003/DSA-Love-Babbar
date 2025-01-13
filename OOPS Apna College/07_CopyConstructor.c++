#include <iostream>
using namespace std;

class Hero
{
  public:
    int health;
    char level;

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << this->health << endl;
        cout << this->level  << endl;
    }
};

int main()
{
    Hero S(70, 'C');
    S.print();

    // R.health = S.health;
    // R.level = S.level;
    Hero R(S);
    R.print();


    return 0;
}