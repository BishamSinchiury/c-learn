/*
================================================================================
PROGRAM TITLE: Factorial Using Recursion
PURPOSE: To calculate factorial of a number using recursive function
NEB SYLLABUS TOPIC: Recursion and Functions
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

// Function declaration (prototype)
long long factorial(int n);

int main()
{
    int num;
    long long result;
    
    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Check for negative numbers
    if (num < 0)
    {
        printf("Error! Factorial of negative number doesn't exist.\n");
    }
    else
    {
        // Call recursive function
        result = factorial(num);
        
        // Display the result
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}

// Recursive function definition
long long factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n! = n × (n-1)!
        return n * factorial(n - 1);
    }
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. RECURSION:
   - A function that calls itself
   - Must have:
     a) Base case: condition to stop recursion
     b) Recursive case: function calls itself with modified parameter
   - Without base case, recursion will continue infinitely (stack overflow)

2. HOW RECURSION WORKS (for factorial(5)):
   
   Call Stack (going down):
   factorial(5) = 5 × factorial(4)
   factorial(4) = 4 × factorial(3)
   factorial(3) = 3 × factorial(2)
   factorial(2) = 2 × factorial(1)
   factorial(1) = 1 (base case reached)
   
   Return Values (coming back up):
   factorial(1) returns 1
   factorial(2) returns 2 × 1 = 2
   factorial(3) returns 3 × 2 = 6
   factorial(4) returns 4 × 6 = 24
   factorial(5) returns 5 × 24 = 120

3. FUNCTION COMPONENTS:
   a) Function Declaration (Prototype):
      - Tells compiler about function before main()
      - Syntax: return_type function_name(parameters);
      - Example: long long factorial(int n);
   
   b) Function Definition:
      - Actual implementation of function
      - Contains the logic
   
   c) Function Call:
      - Using the function
      - Example: result = factorial(num);

4. BASE CASE:
   - Stopping condition for recursion
   - Here: if (n == 0 || n == 1) return 1
   - Prevents infinite recursion
   - CRITICAL: Every recursive function MUST have base case

5. RECURSIVE CASE:
   - The part where function calls itself
   - Here: return n * factorial(n - 1)
   - Parameter must change (n becomes n-1)
   - Moves toward base case

6. RECURSION vs ITERATION (Loop):
   
   Recursion:
   ✓ More elegant and mathematical
   ✓ Easier to understand for some problems
   ✗ Uses more memory (call stack)
   ✗ Slower execution
   
   Iteration:
   ✓ More efficient (less memory)
   ✓ Faster execution
   ✗ Sometimes more complex code

COMMON MISTAKES IN EXAMS:
1. Forgetting base case (causes infinite recursion)
2. Not declaring function before main()
3. Wrong base case condition
4. Not returning value in recursive case
5. Not changing parameter in recursive call
6. Confusing function declaration with definition
7. Wrong return type (using int instead of long long)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 7-10 marks):
- Function declaration: 1 mark
- Main function with input: 1-2 marks
- Function definition: 1 mark
- Base case: 2 marks
- Recursive case: 2-3 marks
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare function before main() (prototype)
3. Write main() function:
   - Declare variables
   - Take input
   - Call recursive function
   - Display result
4. Write function definition:
   - Check base case first
   - Write recursive case
   - Ensure return statements

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a positive integer: 5
Output: Factorial of 5 = 120

Input: Enter a positive integer: 0
Output: Factorial of 0 = 1

RECURSIVE TRACE (for factorial(4)):
```
factorial(4)
  = 4 * factorial(3)
  = 4 * (3 * factorial(2))
  = 4 * (3 * (2 * factorial(1)))
  = 4 * (3 * (2 * 1))
  = 4 * (3 * 2)
  = 4 * 6
  = 24
```

ALTERNATIVE APPROACHES:

Method 1 (Ternary operator):
    long long factorial(int n)
    {
        return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
    }

Method 2 (Single base case):
    long long factorial(int n)
    {
        if (n <= 1)
            return 1;
        return n * factorial(n - 1);
    }

EXAM TIP:
- Always write function prototype before main()
- Base case is MOST IMPORTANT - write it first
- Show recursive trace in rough work
- Test with small numbers: 0! = 1, 3! = 6, 5! = 120

MEMORY CONSIDERATION:
- Each function call uses stack memory
- factorial(1000) would cause stack overflow
- For large numbers, iterative approach is better

RECURSION FORMULA:
n! = n × (n-1)!
where 0! = 1 and 1! = 1

OTHER PROBLEMS USING RECURSION:
- Fibonacci series
- Sum of digits
- Power calculation
- Tower of Hanoi
- GCD calculation

================================================================================
*/
