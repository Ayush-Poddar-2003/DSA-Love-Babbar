#include<iostream>
using namespace std;

class Student{
public:

    string name;

    // Declaration
    Student(string name);
};

//Defination
Student::Student(string name){
    this->name = name;
    cout << "Defined outside" << endl;
}

int main()
{
    Student s1("Aditi");
 
    return 0;
}