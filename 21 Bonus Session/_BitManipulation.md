# BIT MANIPULATION

**BITWISE OPERATORS -** 
1. And & 
2. Or | 
3. Not ~ 
4. XOR ^ 
5. Right Shift >> 
6. Left Shift <<

---

Ques : [Check Even Odd](https://www.geeksforgeeks.org/problems/odd-or-even3618/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)  
```c++
void chechEvenOdd(int num){
    if((num&1) == 0)
        cout << "Even";
    else 
        cout << "Odd";
}
```
For eg `(8 & 1) = (1000 & 0001) = 0` Hence Even  
For eg `(7 & 1) = (0111 & 0001) = 1` Hence Odd

---
Ques : [Set kth bit from right as 1](https://www.notion.so/Set-Kth-Bit-from-right-to-1-1ae0ddc0e62580c3989ed26fbe467cf0)

```c++
int setKthBit(int n, int k) {
    int mask = (1 << k);
    return (n|mask);
}
```
---
Ques : [Set kth bit from right as 0](https://www.notion.so/Set-Kth-Bit-from-right-to-1-1ae0ddc0e62580c3989ed26fbe467cf0)

```c++
int setKthBit(int n, int k) {
    int mask = ~(1 << k);
    return (n & mask);
}
```
---
Ques : Clear last k bits

```c++
int setKthBit(int n, int k) {
    int mask = (-1 << k);
    return (n & mask);
}
```
