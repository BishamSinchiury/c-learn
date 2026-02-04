/*
================================================================================
PROGRAM TITLE: Sum of Digits Using Recursion
PURPOSE: To calculate sum of digits using recursive function
NEB SYLLABUS TOPIC: Recursion
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

// Function declaration
int sumOfDigits(int n);

int main()
{
    int num, result;
    
    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Call recursive function
    result = sumOfDigits(num);
    
    // Display result
    printf("Sum of digits of %d = %d\n", num, result);
    
    return 0;
}

// Recursive function to calculate sum of digits
int sumOfDigits(int n)
{
    // Base case: if number is 0, sum is 0
    if (n == 0)
    {
        return 0;
    }
    else
    {
        // Recursive case: last digit + sum of remaining digits
        return (n % 10) + sumOfDigits(n / 10);
    }
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. RECURSION FOR SUM OF DIGITS:
   - Function calls itself with smaller number
   - Base case: n == 0, return 0
   - Recursive case: (n % 10) + sumOfDigits(n / 10)

2. HOW IT WORKS (for num = 1234):
   
   sumOfDigits(1234)
   = 4 + sumOfDigits(123)
   = 4 + (3 + sumOfDigits(12))
   = 4 + (3 + (2 + sumOfDigits(1)))
   = 4 + (3 + (2 + (1 + sumOfDigits(0))))
   = 4 + (3 + (2 + (1 + 0)))
   = 4 + (3 + (2 + 1))
   = 4 + (3 + 3)
   = 4 + 6
   = 10

3. BREAKDOWN:
   - n % 10: Extract last digit
   - n / 10: Remove last digit
   - Add last digit to sum of remaining digits

4. BASE CASE:
   - When n becomes 0, stop recursion
   - Return 0 (no more digits to add)

5. RECURSIVE CASE:
   - Extract last digit: n % 10
   - Get sum of remaining: sumOfDigits(n / 10)
   - Add them together

COMMON MISTAKES:
1. Forgetting base case (infinite recursion)
2. Wrong base case condition
3. Not declaring function before main()
4. Wrong formula in recursive case
5. Not returning value

EXAM NOTES:
Expected Output:
Enter a positive integer: 1234
Sum of digits of 1234 = 10

RECURSIVE TRACE:
sumOfDigits(1234) → 4 + sumOfDigits(123)
sumOfDigits(123)  → 3 + sumOfDigits(12)
sumOfDigits(12)   → 2 + sumOfDigits(1)
sumOfDigits(1)    → 1 + sumOfDigits(0)
sumOfDigits(0)    → 0 (base case)

Return path:
0 → 1 → 3 → 6 → 10

COMPARISON WITH LOOP:
Loop method: Faster, uses less memory
Recursive method: More elegant, easier to understand

================================================================================
*/
