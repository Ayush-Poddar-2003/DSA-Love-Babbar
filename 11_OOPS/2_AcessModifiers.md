# ACCESS MODIFIERS
#### 1. Public :  
Accessible from anywhere, outside the class BUT within a program.

```c++
class Public{
public:
    int length;

    void setLength(int l){
        length = l;
    }
    int getLength(void){
        return length;
    }
};

int main(){
    Public obj1;

    obj1.length = 10; 
    obj1.setLength(10);
    cout << obj1.getLength() << endl;
}
```

---
#### 2. Private :
- By default all the members of a class are private.
- Members cam't be accessed or viewed from outside the class directly.
- Only the friend and functions (within same class) can access private members.

```c++
class Private {
private:
    int cost;

public:
    void setCost(int c){
        cost = c;
    }
    int getCost(void){
        return cost;
    }
};

int main()
{
    Private obj2;

    obj2.cost = 10 ; // ERROR AS COST IS PRIVATE
    obj2.setCost(10);
    cout << obj2.getCost() << endl;
}
```
---
#### 3. Protected :
Very similar to a private but can be accessed via derived classes 
```c++
class Protected{
protected:
    int width;
};

class Derived : Protected
{
public:
    int setWidth(int w){
        width = w;
    }
    int getWidth(void){
        return width;
    }
};

int main()
{
    Derived obj3;

    obj3.width = 10 ; // ERROR AS IT'S PROTECTED

    obj3.setWidth(5);
    cout << obj3.getWidth() << endl;
}
```