#include<iostream>
using namespace std;

class Student{
public:

    //Data Members
    int id, age;
    string name;

    //Parameterized Constructor
    Student(int id, int age, string name){
    cout << "Parametrized constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
    }

    //Copy Constructor: No need to define still better practice
    Student(const Student &obj){
        cout << "Copy constructor called" << endl;
        this->id = obj.id;
        this->age = obj.age;
        this->name = obj.name;
    }

    //Methods
    void study(){
        cout << this->name << " Studies" << endl;
    }

    //Destructor
    ~Student(){
        cout << this->name << " Destructor called automatically" << endl;
    }

};

int main(){

    Student A(92, 21, "Ayush");
    A.study();

    Student B(93, 20, "Aditi");
    B.study();

    Student C = B;
    C.study();

    Student D(A);
    D.study();

    return 0;
}