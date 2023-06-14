# Programming Language Project - Lab 4

**1) Does your language include multiple types of loops (while, do/while, for, foreach)? If
so, what are they and how do they differ from each other?**
<br><br>Yes, C includes while loops, do while loops, and for loops. 
<br><br>The loops have different placement of the code evaluating the loop condition. For example, the while loop and for loop evaluate the condition before entering the loop whereas the do while loop after a loop iteration occurs. 
<br><br>A key difference in behavior is that, if the loop condition is not met in a while loop or a for loop, the code inside the loop will not be executed. But if the condition is not met in a do while loop, the code inside the loop will still be executed once before the condition is evaluated and the loop is exited. This is because the loop condition is at the end of the loop. 
<br><br>Another difference is in the code that controls the iterations of the loop. In a while loop this code is in the loop body, usually the last line, whereas in for loops it occurs in the for loop conditon.

**2) What is the syntax for declaring a function in your language?**

#### Code Example
 ```c
return_type name_of_function(parameters) {
    // code to be executed
    // return statement if value is returned
}
```

#### Not Returning Value Example: 

```c
void even_or_odd(int num) {
    if(num % 2 == 0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
```

#### Returing a Value Example:

```c
int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}
```

**3) Are there any rules about where the function has to be placed in your code file so that
it can run?**
<br>In C functions must be created and placed in the file before they are called.

#### Invalid Placement:

```c
void perform_calculations() {
    integer_multiplication(5,2);
}

int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}
```

#### Valid Placement:

```c
int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}

void perform_calculations() {
    integer_multiplication(5,2);
}
```

**4) Does your language support recursive functions?**
<br> Yes, C does support recurisve functions.

**5) Can functions in your language accept multiple parameters? Can they be of different
data types?**
<br>Yes, functions in C do accept multiple paremeters. They can be of different data types. 

#### Code Example: 

```c
void print_data_types(int num, char word[]) {
    printf("Integer: %d\n", num);
    printf("String Value: %s\n", word);
}
```

**6) Can functions in your language return multiple values at the same time? How is that
implemented? If not, are there ways around that problem? What are they?**
<br> Functions in C cannot return multiple values the same way a language like Python does (return x, y). But data structures such as arrays and C's 'struct' can be used to achieve this functionality. 

#### Code Example: 

```c
struct Height {
    int feet;
    int inches;
};

struct Height convert_to_feet(int cm) {
    struct Height h;
    int inches = cm / 2.54;
    h.feet = inches / 12;
    h.inches = inches - (h.feet * 12);

    return h;
}

int main() {
    struct Height height;
    height = convert_to_feet(170);

    printf("Feet: %d\n", height.feet);
    printf("Inches: %d\n", height.inches);
}
```

**7) Is your language pass-by reference or value?**
<br> C is pass by value. This means that when a function is called and arguments are passed in, the value of the arguments are copied into variables in the function. So functions work with copies of the values rather than accessing the original variables directly. The variables outside of the function do not change if changes are made to the corresponding values in the function.

**8) Are there any other aspects of functions in your language that aren't specifically asked
about here, but that are important to know in order to write one? What are they?**
<br>One general rule about functions is that C requires the inclusion of a main() function. Another interesting aspect about functions in C is function prototypes. This is a way of declaring a function early in the program before it is defined and called.

#### Code Example: 

```c
int integer_multiplication(int num1, int num2);
```

## Sources
https://www.geeksforgeeks.org/c-loops/
<br>https://computer.howstuffworks.com/c13.htm/
<br>https://www.w3schools.com/c/c_structs.php
<br>https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/