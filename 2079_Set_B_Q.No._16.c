/*
2079 GIE Set B Q.No. 16
Define function. Write a program to generate factorials of a given number using a recursive function in the program.
*/

#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial(n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative input (factorial is not defined for negative numbers)
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calling the recursive function and displaying the result
        printf("Factorial of %d is: %lld\n", num, factorial(num));
    }

    return 0;
}
