# <center> PAIR
```c++
// Declaration
pair<int, int> p;

// Initialize
pair<int, int> p = make_pair(10,20);
// OR
pair<int, int> p(10, 20);

//Access 
p.first = 100;
p.second = 200;
```


# <center> VECTOR
```C++
int arr[5]; //Static Array

int n;
cin >> n;
int* arr = new int[n]; //Dynamic Array
```
In vector no need to tell the size 
```c++
vector<int> arr;
v.push_back(69);
// If vector gets full it doubles it's size

v.size();
v.capacity();
v.pop_back();
v.clear();
v.at(i);

// CREATION OF VECTORS
vector<int> arr;
vector<int> arr(5,-1); //-1-1-1-1-1
vector<int> arr = {1,2,3,4,5};
vector<int> arr {1,2,3,4,5};

// COPYING VECTOR
vector<int> arr1(arr2) //arr1 me arr2 copy


```