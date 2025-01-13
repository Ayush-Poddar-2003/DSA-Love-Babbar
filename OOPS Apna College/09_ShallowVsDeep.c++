#include <bits/stdc++.h>
using namespace std;

class Hero
{
    int health;
  public:
    char level;
    char *name; //char name[] not a good practice

    Hero()
    {
        name = new char[100];    
    }

    void sethealth(int h){
        health = h;
    }
    void setlevel(char a){
        level = a;
    }
    void setname(char name[]){
        strcpy(this->name, name);
    }
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }


    void print(){
        cout << "\nName : " << this->name;
        cout << ", Health : " << this->health;
        cout << ", Level : " << this->level  << endl;
    }
};

int main()
{
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7]="BABBAR";
    hero1.setname(name);
    hero1.print();


    // Hero hero2 = hero1;
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G'; //Only change made in hero1 then why hero2 changed?
    hero1.print();
    hero2.print();

    return 0;
}