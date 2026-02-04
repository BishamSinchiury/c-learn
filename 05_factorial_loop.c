/*
================================================================================
PROGRAM TITLE: Factorial Using Loop
PURPOSE: To calculate factorial of a given number using for loop
NEB SYLLABUS TOPIC: Loops (for loop)
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, i;
    long long factorial = 1;  // Using long long to handle large factorial values
    // num: number whose factorial is to be calculated
    // i: loop counter
    // factorial: to store result (initialized to 1)
    
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
        // Calculate factorial using for loop
        // Multiply factorial by each number from 1 to num
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;  // Or: factorial *= i;
        }
        
        // Display the result
        printf("Factorial of %d = %lld\n", num, factorial);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. FACTORIAL:
   - Product of all positive integers from 1 to n
   - Denoted by n! (n factorial)
   - Formula: n! = n × (n-1) × (n-2) × ... × 2 × 1
   
   Examples:
   - 0! = 1 (by definition)
   - 1! = 1
   - 2! = 2 × 1 = 2
   - 3! = 3 × 2 × 1 = 6
   - 4! = 4 × 3 × 2 × 1 = 24
   - 5! = 5 × 4 × 3 × 2 × 1 = 120
   - 6! = 6 × 5 × 4 × 3 × 2 × 1 = 720

2. FOR LOOP:
   - Best choice when we know exact number of iterations
   - Syntax: for (initialization; condition; increment)
   - Here: for (i = 1; i <= num; i++)
     * Start from 1
     * Continue while i <= num
     * Increment i by 1 each time

3. WHY INITIALIZE factorial TO 1:
   - Multiplication identity: any number × 1 = that number
   - If we initialize to 0, result will always be 0
   - Starting with 1 allows proper multiplication

4. LONG LONG DATA TYPE:
   - Factorial grows very quickly
   - int can store up to ~2 billion
   - long long can store much larger values
   - 20! = 2,432,902,008,176,640,000 (needs long long)

5. STEP-BY-STEP EXECUTION (for num = 5):
   
   Initial: factorial = 1
   
   i = 1: factorial = 1 × 1 = 1
   i = 2: factorial = 1 × 2 = 2
   i = 3: factorial = 2 × 3 = 6
   i = 4: factorial = 6 × 4 = 24
   i = 5: factorial = 24 × 5 = 120
   
   Result: 5! = 120

6. SPECIAL CASES:
   - 0! = 1 (mathematical convention)
   - 1! = 1
   - Negative numbers: factorial undefined

COMMON MISTAKES IN EXAMS:
1. Initializing factorial to 0 instead of 1
2. Starting loop from 0 instead of 1
3. Using int instead of long long (causes overflow)
4. Not handling negative numbers
5. Wrong format specifier (%d instead of %lld for long long)
6. Forgetting to declare factorial variable

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Header and declarations: 1 mark
- Input statement: 1 mark
- Initialization of factorial: 1 mark
- For loop logic: 2-3 marks
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (num, i, factorial)
3. Initialize factorial = 1 (IMPORTANT!)
4. Take input
5. Optional: Check for negative numbers
6. Use for loop from 1 to num
7. Multiply factorial by i in each iteration
8. Display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a positive integer: 5
Output: Factorial of 5 = 120

Input: Enter a positive integer: 0
Output: Factorial of 0 = 1

Input: Enter a positive integer: -5
Output: Error! Factorial of negative number doesn't exist.

ALTERNATIVE LOGIC:

Method 1 (Using while loop):
    i = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    }

Method 2 (Using do-while loop):
    i = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i <= num);

Method 3 (Counting down):
    for (i = num; i >= 1; i--)
    {
        factorial *= i;
    }

EXAM TIP:
- For loop counting up (1 to num) is most standard
- Always initialize factorial to 1, not 0
- Use long long for larger numbers
- Test with small numbers: 0! = 1, 3! = 6, 5! = 120

COMPARISON WITH RECURSION:
- Loop method: Iterative approach (uses loop)
- Recursion method: Function calls itself
- Loop is more efficient (less memory)
- Recursion is more elegant but slower

FACTORIAL GROWTH:
10! = 3,628,800
15! = 1,307,674,368,000
20! = 2,432,902,008,176,640,000

================================================================================
*/
