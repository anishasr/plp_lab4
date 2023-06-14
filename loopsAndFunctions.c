#include <stdio.h>
#include <string.h>

// Write a function that takes in two numbers, multiplies them, and returns the output
    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    // Write a recursive function (one that calculates a factorial is fine)

    int factorial(int num) {
        if (num == 1) {
            return 1;
        } else {
            return num * factorial(num - 1);
        }
    }

    // Write a function that takes in a string (or your language's equivalent) and splits it
    // into two strings, then returns both strings

    struct SplitString {
        char s1[50];
        char s2[50];
    };

    struct SplitString split_string(char single_str[]) {
        struct SplitString split_str;

        // calculate length of string
        int len = strlen(single_str);

        int midpoint = len / 2;

        for(int i = 0; i < midpoint; i++) {
            split_str.s1[i] = single_str[i]; 
        }
        
        int pos = 0;
        for(int j = midpoint; j < len; j++) {
            split_str.s2[pos] = single_str[j]; 
            pos++;
        }

        printf("%s\n", split_str.s1);
        printf("%s\n", split_str.s2);

        return split_str;
        
    }

    // Write a function that tests whether your language is pass-by-reference or
    // pass-by-value.

    void pass_by(int num) {
        // The value in this variable becomes 500 - shown in output of print statement
        num = num * 100;
        printf("%d\n", num);
    }


    int main() {

        // while loop
        int i = 0;

        while (i < 10) {
            printf("%d\n", i);
            i++;
        }

        printf("\n");

        // do while loop
        int j = 0;
        do
        {
            printf("%d\n", j);
            j++;
        } while (j < 10);

        printf("\n");

        // for loop
        for (int k = 0; k < 10; k++)
        {
            printf("%d\n", k);
        }

        // Call your functions and save the results of the function calls in variables.

        int product = multiply(10, 2);
        int fact = factorial(5);
        struct SplitString split_strings = split_string("HelloWorld");
        
        int num = 5;
        pass_by(num);
        // The value is still 5, it does not change to 500 - shown in output of print statement
        printf("%d", num);
    }