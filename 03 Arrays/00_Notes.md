# ARRAYS

DS that contains similar type of data  
Values are stored in contiguous memory location

PROS : Easy Traversal, Searching, Homogenous elements  
CONS : Insertion, Deletion, Inflexible

```c++
int arr[5];  // [][][][][] will be created
```
---
### Behind the scenes :-  
A memory is given name arr ❌  
A **Symbol table** stores name and address it points to

---
### Initialization and Declaration
```c++
int arr[ ]; //Error
int arr[5]; //Garbage

int arr[ ] = {1,2,3};
int arr[3] = {1,2,3};
int arr[5] = {1,2,3}; //Empty fills with 0
int arr[2] = {1,2,3}; //Error
```
---
### Bad Practice
```c++
int n;
cin >> n;
int arr[n]; 
```
Only some compiler allows as stack might overflow, May throw runtime error

---

### Indexing and Addresses

    a[i] address = BaseAddress + SizeOfElement * i

       a[i]   =   i[a]
    *(arr+i)     *(i+arr)
```c++
int arr[3] = {1, 2, 3};
cout << arr;    //104

cout << arr[0]; //104 => 104 + 4*0
//Hence indexing starts from 0

cout << arr[1]; //108 => 104 + 4*1
cout << arr[2]; //112 => 104 + 4*2
cout << arr[3]; //116 => 104 + 4*3
```
---
### Size vs No of Elements
```c++
int arr[5] = {1,2,3};

cout << sizeof(arr)/sizeof(int); 
// 5 but we have 3 elements ie. it gives no. of boxes not no of elements
```
---
### Function & Arrays

```c++
main() 
{
    int arr[5] = {0};
    func(arr, n);
}

void func(int arr[], int n)
{
    // Do send total elments "n"
    // Arrays always uses pass by reference
}

```


# <center>2d Arrays
BTS, 2d is stored as 1d only

      a[i][j]   =   No(C)*(i+j)
    (3d index)      (2d index)


```c++
int arr[2][3] = 
{
    {1,2,3},
    {4,5,6}
}
// or
int arr[2][3] = {1,2,3,4,5,6}
```

## STORAGE - 

### Row Major
### Col Major