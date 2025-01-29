# <center>Lecture 1

```c++ 
char arr[10]; 

arr[i] // Accessing
cin >> arr[i]; // INPUT
cout << arr[i]; // OUTPUT
```
**Char vs Integer Array**  
We can take entire input at once in **char** array.
```c++
char arr[5];
cin >> "LOVE";
// Will fill blocks with each char along with /0 

cout << arr;
// This will print till null character is encountered
// To confirm wheter null character at end, use ASCII


// INPUT ANOMALIES
cin >> arr;   //LOVE BABBAR
cout << arr;  //LOVE

//Bcoz by default space is considered as delimeter
//To avoid this we use -

cin.getline(arr,10);
//We can create our own delimeter
cin.getline(arr, 10, '\t');

```


### STRING
Dynamic, more safer + more functionalities.  
Char array was concept of c, string of c++.  
String is more like vector, char array like array.  
Everything same just input

```c++
getline(cin, arr);
```

# <CENTER> Lecture 2

[Leetcode 1047]()  
[Leetcode 1209]()  
[Leetcode 1910]()  
[Leetcode 680]()  
[Leetcode 539]()  
[Leetcode 647]()  


# <CENTER> Lecture 3
[Leetcode 2325]()  
[Leetcode 2391]()  
[Leetcode 791]()  
[Leetcode 2125]()  
[Leetcode 890]()  