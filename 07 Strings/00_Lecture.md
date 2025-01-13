# CHARACTER ARRAY
Sequence / Array of characters

```c++ 
// CREATION 
char arr[10]; 
vector<char> arr;

// Accessing
arr[i]

// INPUT
cin >> arr[i];

// OUTPUT
cout << arr[i];
```

## Char vs Integer Array
We can take entire input at once in char array.

```c++
char arr[5];
cin >> "LOVE";
// This will fill blocks with each character along with /0 at end

cout << arr;
// This will print till null character is encountered
```

#### To confirm wheter null character at end, use ASCII
```c++
    for(int i=0;i<n;i++)
    {
        cout << (int)arr[i];
    }
```



## Input Anomalies
```c++
cin >> arr;   //LOVE BABBAR
cout << arr;  //LOVE
//Bcoz by default space is considered as delimeter
```
To avoid this we use -

```c++
    cin.getline(arr,10);
    cout << arr;

    //We can create our own delimeter

    cin.getline(arr, 10, '\t');
    cout << arr;
```


# <center>STRING
Dynamic, more safer + more functionalities.  
Char array was concept of c, string of c++.  
String is more like vector, char array like array.  
Everything same just input

```c++
    getline(cin, arr);
```

---