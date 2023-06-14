# Programming Language Project - Lab 4

1) Does your language include multiple types of loops (while, do/while, for, foreach)? If
so, what are they and how do they differ from each other? 
<br><br>Yes, C includes while loops, do while loops, and for loops. 

<br><br>The loops have different placement of the code evaluating the loop condition. For example, the while loop and for loop evaluate the condition before entering the loop whereas the do while loop after a loop iteration occurs. 

<br><br>A key difference in behavior is that, if the loop condition is not met in a while loop or a for loop, the code inside the loop will not be executed. But if the condition is not met in a do while loop, the code inside the loop will still be executed once before the condition is evaluated and the loop is exited. This is because the loop condition is at the end of the loop. 

<br><br>Another difference is in the code that controls the iterations of the loop. In a while loop this code is in the loop body, usually the last line, whereas in for loops it occurs in the for loop conditon.

2) What is the syntax for declaring a function in your language?
<br><br>

## Code Example
 ```c
return_type name_of_function(parameters) {
    // code to be executed
    // return statement if value is returned
}
```

## Not Returning Value Example: 

 ```c
void even_or_odd(int num) {
    if(num % 2 == 0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
```

## Returing a Value Example:

```c
int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}
```

3) Are there any rules about where the function has to be placed in your code file so that
it can run?
<br><br> In C functions must be created and placed in the file before they are called.

## Valid Placement:

```c
void perform_calculations() {
    integer_multiplication(5,2);
}

int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}
```

## Invalid Placement:

```c
int integer_multiplication(int num1, int num2) {
    return num1 * num2;
}

void perform_calculations() {
    integer_multiplication(5,2);
}
```

4) Does your language support recursive functions? 
<br><br> Yes, C does support recurisve functions.

## Sources
https://www.w3schools.com/c/c_booleans.php
https://www.geeksforgeeks.org/short-circuit-evaluation-in-programming/
https://www.tutorialspoint.com/cprogramming/switch_statement_in_c.htm
https://www.geeksforgeeks.org/fallthrough-in-c/