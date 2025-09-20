# This
```c++
class Animal{
public:
    string name;
    int legs;

    Animal(string name){
        this->name = name;
        cout << this;
    }
};

Animal aa("Bexy"); //Adress of name
cout << &aa; //same address
```

Hence this stores address of current object.

---
# STATIC DATA MEMBER :-

- Initialized to 0 , no other initialization is permitted whenever the fist object is created.
- Only one copy is created & shared by all objects.
- Visible everywhere in the program.

IMPORTANT : after ending of class we have to mention :

```c++
class demo{
private:
    int x, y;
    static int z; // static variable declared

public:
    void getdata(int a, int b){
        x = a;
        y = b;
        z = z + 1;
    }
    void showdata(){
        cout << x << y << z;
    }
};

int demo :: z ; // IMPORTANT LINE 

int main()
{
    demo obj1, obj2;

    obj1.getdata(5, 7);
    obj1.showdata();

    obj2.getdata(2, 9);
    obj2.showdata();
}
```
# STATIC MEMBER FUNCTION :-

Can acess only static data members  
Since static members are not a part of single object, it is called using class name.
```c++
class demo2
{
    int x;
    static int z; // Static data member

public:
    void getdata(int a){
        x = a;
        z = z + 1;
    }
    void showdata(){
        cout << x << z;
    }
    static void myfun(){
        cout << x ; // will give error as static functions only works with static members
        cout << z;
    }
};

int demo2 ::z; // IMPORTANT LINE TO MAKE STATIC CODE WORK CORRECTLY

int main()
{
    demo2 aa;

    aa.getdata(10);
    aa.showdata();

    aa.myfun(); // will give error coz static fun aren't a part of objects

    demo2 :: myfun();

    return 0;
}
```