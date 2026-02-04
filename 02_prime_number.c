/*
================================================================================
PROGRAM TITLE: Prime Number Checker
PURPOSE: To check whether a given number is prime or not
NEB SYLLABUS TOPIC: Loops (for loop) and Conditional Statements
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, i, isPrime = 1;  // num: input number, i: loop counter, isPrime: flag (1=prime, 0=not prime)
    
    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Numbers less than or equal to 1 are not prime
    if (num <= 1)
    {
        isPrime = 0;  // Set flag to 0 (not prime)
    }
    else
    {
        // Check divisibility from 2 to num/2
        // If num is divisible by any number in this range, it's not prime
        for (i = 2; i <= num / 2; i++)
        {
            // If num is divisible by i (remainder is 0)
            if (num % i == 0)
            {
                isPrime = 0;  // Set flag to 0 (not prime)
                break;  // Exit loop as we found a divisor
            }
        }
    }
    
    // Display result based on flag value
    if (isPrime == 1)
    {
        printf("%d is a PRIME number.\n", num);
    }
    else
    {
        printf("%d is NOT a PRIME number.\n", num);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. PRIME NUMBER:
   - A number greater than 1 that has no divisors other than 1 and itself
   - Examples: 2, 3, 5, 7, 11, 13, 17, 19, 23...
   - 1 is NOT a prime number
   - 2 is the only even prime number

2. FOR LOOP:
   - Syntax: for (initialization; condition; increment) { statements }
   - Used when we know how many times to repeat
   - Three parts:
     a) Initialization: i = 2 (start from 2)
     b) Condition: i <= num/2 (continue until num/2)
     c) Increment: i++ (increase i by 1 each time)

3. FLAG VARIABLE:
   - A variable used to track a condition (true/false)
   - Here: isPrime = 1 means "assume it's prime"
   - If we find a divisor, we set isPrime = 0
   - Common technique in programming

4. BREAK STATEMENT:
   - Exits the loop immediately
   - Used for optimization - no need to check further once we find a divisor
   - Saves time and iterations

WHY CHECK ONLY UP TO num/2:
- No number greater than num/2 can divide num (except num itself)
- Example: For 10, we only check 2, 3, 4, 5
- This makes the program more efficient

COMMON MISTAKES IN EXAMS:
1. Not handling the case when num <= 1
2. Starting loop from 1 instead of 2
3. Checking up to num instead of num/2 (works but inefficient)
4. Forgetting to initialize isPrime flag
5. Not using break statement (works but inefficient)
6. Confusing = (assignment) with == (comparison)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 6-8 marks):
- Header files and declarations: 1 mark
- Input statement: 1 mark
- Logic (loop with divisibility check): 3-4 marks
- Flag variable usage: 1 mark
- Output statements: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Write header comment
2. Include <stdio.h>
3. Declare variables (num, i, isPrime)
4. Take input from user
5. Handle edge case (num <= 1)
6. Use for loop to check divisibility
7. Use break for optimization
8. Display result using if-else

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a positive integer: 7
Output: 7 is a PRIME number.

Input: Enter a positive integer: 10
Output: 10 is NOT a PRIME number.

ALTERNATIVE LOGIC:

Method 1 (Check up to square root):
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
Method 2 (Using function):
    int checkPrime(int n)
    {
        if (n <= 1) return 0;
        for (int i = 2; i <= n/2; i++)
            if (n % i == 0) return 0;
        return 1;
    }

EXAM TIP:
- The method shown in main program is most commonly accepted
- Always use meaningful variable names
- Add comments to explain logic
- Test with examples: 1 (not prime), 2 (prime), 4 (not prime), 7 (prime)

================================================================================
*/
