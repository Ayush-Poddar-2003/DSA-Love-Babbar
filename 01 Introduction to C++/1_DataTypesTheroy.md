# Introduction

## 1. INT

- In most systems, `int` occupies **4 bytes = 32 bits**.
- `2^32 = 4,294,967,296`
- The **leftmost bit** is used for the **sign**.
- So, the maximum value an `int` can store is:  
  `2^31 - 1 = 2147483647`
- The minimum value is:  
  `-2^31 = -2147483648`

### ℹ️ Code Sample:
```cpp
int a = 1000;
cout << typeid(a).name();      // Displays the datatype
cout << sizeof(a);             // 4 bytes
cout << INT_MAX;               // 2147483647
```

---

## 📏 Integer Types & Sizes

| Type                        | Size (Bytes) |
|-----------------------------|--------------|
| `int`                      | 4            |
| `unsigned int`            | 4            |
| `short int`               | 2            |
| `unsigned short int`      | 2            |
| `long int`                | 4 or 8       |
| `unsigned long int`       | 4 or 8       |
| `long long int`           | 8            |
| `unsigned long long int`  | 8            |

---

## 🔢 Integer Ranges

- `INT_MAX`: 2147483647  
- `INT_MIN`: -2147483648  
- `UINT_MAX`: 4294967295  
- `LLONG_MAX`: 9223372036854775807  
- `LLONG_MIN`: -9223372036854775808  
- `ULLONG_MAX`: 18446744073709551615  
- `SHRT_MAX`: 32767  
- `SHRT_MIN`: -32768  
- `USHRT_MAX`: 65535  

---

## ⚠️ Overflow & Underflow in INT

### 🔼 Overflow Example:
```cpp
int n1 = 2147483647;
cout << n1 + 1;  // Output: -2147483648 (Overflow)
```

> If you exceed the max value, it wraps around to the **minimum**.

### 🔽 Underflow Example:
```cpp
int n2 = -2147483648;
cout << n2 - 1;  // Output: 2147483647 (Underflow)
```

> If you go below the minimum, it wraps around to the **maximum**.

---

## 🧾 Integer Literal Types

| Suffix  | Meaning            |
|---------|--------------------|
| `...`   | Decimal            |
| `0...`  | Octal              |
| `0x...` | Hexadecimal        |
| `u`     | Unsigned int       |
| `l`     | Long               |
| `ul`    | Unsigned long      |

---

## 🔬 FLOAT vs DOUBLE

- Used to store **decimal/point values**.
- `E` notation represents powers of 10.  
  e.g., `45E12` is `45 * 10^12`.

| Type    | Precision              | Size (Bytes) |
|---------|------------------------|--------------|
| float   | ~6-7 decimal places     | 4            |
| double  | ~15 decimal places      | 8            |

### 🧪 Sample Code:
```cpp
float b = 5.75;
double c = 19.9954513;

cout << typeid(b).name();     // float
cout << typeid(c).name();     // double
```

---

## 🎯 Precision Formatting with `setprecision`

- `setprecision(n)` sets total number of digits (not just after decimal).
- `fixed` ensures digits **after decimal** are shown accurately.

### Example:
```cpp
float d = 3.2545895;
double e = 8.41549154;

cout << setprecision(3) << d;           // 3.25
cout << fixed << setprecision(3) << d;  // 3.255
cout << setprecision(11) << e;          // Full double precision
cout << fixed << setprecision(9) << e;  // 8.415491540
```

---

## ✅ Conclusion

- Always choose the right data type based on range and precision.
- Beware of overflows and underflows when dealing with integer boundaries.
- Use `double` for precise decimal calculations.
- `setprecision` is helpful for formatting floating-point output.

---
