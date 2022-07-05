# Objects
- Is a placed in memory with a type that defines what can be placed in it.
- Objects with a name are called Variables
``` cpp
string first_name;  // definition of the variable 
cin >> first_name;  // assign the value from the input to the variable
cout << "Hello, " << first_name << "!\n";
```

# Variables
- strings = string
    - any character inside double quotes
- integers = int
    - numbers without decimals
- double
    - use for floating point numbers
- char
    - Single characters, such as 'A', always inside single quotes
- bool
    -   Booleans, true or false
- syntax:

    ```cpp
    type name = value;
    ```

# Input type
- The operator **>>** reads until their is a whitespace (enter, space, tab, newline)
    - Meaning can assign multiple variables in a single line (example):
        ```cpp
        int age;
        string name;
        cin >> name >> age;
        // aldair 27
        // name will be aldair as string
        // age will be 27 as integer
        ```

# Names
- Start wit a letter
- Contains only letters, digits and underscores
```cpp
x
number_of_elements
Fouruer_transform
z2
Polygon
```
- Never start variables with underscore _, they are reserve for implementationa and system entities
- Separate words with underscores
- Do not use all capital letters, they are reserved for macros
- Initial capital letters use for types we define. Example:
```cpp
int age_number;
Dog morgan; //Dog is a type define by us
```

# Type safety
- Type safe is when objects are used according to the rules of their types
- Example:
    - Use a variable when it is not initialized
    ```cpp
    int number1; // number1 is undefined
    int total = 3;
    int result = number1 + total; //result will be undefined
    ```
# Safe conversions
No data is loss in safe conversions:
```cpp
char c1 = 'z';
int i1 = c1;
char c2 = i1;
cout << c1 << " " << i1 << " " << c2 << 'n\';
//output is: z 122 z
```

The following are safe conversions:
- bool to char
- bool to int
- bool to double
- char to int
- char to double
- int to double

# Unsafe conversions
The value from the original type might differ to the target type, unsafe conversions:
- doouble to int
- double to char
- double to bool
- int to char
- int to bool
- char to bool

Placing a bigger value to a type that has no capacity example double into int, or int into char; the value is narrowed.
C++11 introduced initialization notationm which allow the compiler to tell if the conversion requires narrowing. Use {} instead of the assigment = 
```cpp
double x {2.7}; // universal and uniform initialization
int y {x};
```