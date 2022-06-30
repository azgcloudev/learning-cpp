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