#include<iostream>
using namespace std;

class Student{
public:

    string name;
    float *gpa; //Dynamic variable

    Student(string name, float gpa){
    cout << "Parametrized constructor called" << endl;
        this->name = name;
        this->gpa = new float(gpa); //dynamic allocation
    }

    void study(){
        cout << this->name << " Studies" << endl;
        cout << "CGPA is : " << *gpa << endl;
    }

    //Dynamic memory me khud se delete krna pdega
    ~Student(){
        cout << this->name << " Destructor called Manually" << endl;
        delete this->gpa;
    }

};

int main(){

    Student *A = new Student("Ayush", 9.8); //Heap Memory Allocation
    A->study();

    delete A;

    return 0;
}