#include<iostream>
using namespace std;

class Student{
public:

    //Data Members
    int id, age;
    string name;

    //Default Constructor
    Student(){
        cout << "Constructor called automatically" << endl;
    }

    //Methods
    void study(){
        cout << this->name << " Studies" << endl;
    }
    void sleep(){
        cout << this->name << " Sleeps" << endl;
    }
    void bunk(){
        cout << this->name << " Bunks" << endl;
    }

    //Destructor
    ~Student(){
        cout << this->name << " Destructor called automatically" << endl;
    }

};

int main(){

    Student A;
    A.name = "Ayush";
    A.age = 21;
    A.id = 92;
    A.study();
    A.bunk();
    A.sleep();

    Student B;
    B.name = "Aditi";
    B.age = 20;
    B.id = 93;
    B.study();
    B.bunk();
    B.sleep();

    return 0;
}