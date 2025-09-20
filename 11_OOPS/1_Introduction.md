# OOPS
Instead of functions, Classes and Objects

---
**OBJECTS ?**  
Real life Entity having -   

    Attributes/Properties/State  
    Functions/Methods/Behaviour

When an object is created, default constructor is invoked.

---
**CLASS ?**  
Blueprint of an object  
When an object is created, then only memory is allocated

```c++
class MyClass{
public:           
    void inside() {
        cout << "Hello World!";
    }
};

class MyClass2
{
public:
    void outside();
};

void MyClass2 :: outside(){
    cout << "Hello World!";
}

int main(){
    MyClass myObj;  
    myObj.inside(); 
    MyClass2 myObj2; 
    myObj2.outside();
    return 0;
}
```
---
**NOTE -**  
When a class is empty, and an object of that class is created then  
**1** Byte is allocated to keep its track.

---
WHAT IF CLASS IS IN DIFFERENT FILE ?  
`#include FileName.cpp`

---
STATIC VS DYNAMIC OBJECTS ?
```c++
class MyClass{
public: 
    int age = 21;
};

MyClass aa; //static
cout << aa.age; //21

MyClass *ab = new MyClass; //dynamic
cout << (*b).age; //as b is just address
//or
cout << b->age; 
```

---
IF CLASS HAS CHAR AND INT DATA MEMBERS AND WE CREATE AN OBJECT, THEN WHY IT'S SIZE IS **8** BYTES DESPITE OF **(1+4)**

PADDING ?   
GREEDY ALIGNMENT ?

---
