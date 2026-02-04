/*
================================================================================
PROGRAM TITLE: Sum of N Natural Numbers
PURPOSE: To calculate sum of first n natural numbers
NEB SYLLABUS TOPIC: Loops (for loop)
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int n, i, sum = 0;
    // n: how many natural numbers to sum
    // i: loop counter
    // sum: to accumulate the sum (initialized to 0)
    
    // Prompt user to enter n
    printf("Enter a positive integer: ");
    
    // Read n from user
    scanf("%d", &n);
    
    // Calculate sum using for loop
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;  // Add current number to sum
    }
    
    // Display the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. NATURAL NUMBERS:
   - Positive integers starting from 1
   - Sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ...
   - NOT including 0 (in most definitions)

2. SUM OF N NATURAL NUMBERS:
   - Add first n natural numbers
   - Examples:
     * n = 5: 1 + 2 + 3 + 4 + 5 = 15
     * n = 10: 1 + 2 + 3 + ... + 10 = 55
     * n = 100: 1 + 2 + 3 + ... + 100 = 5050

3. MATHEMATICAL FORMULA:
   Sum = n × (n + 1) / 2
   
   Examples:
   - n = 5: 5 × 6 / 2 = 30 / 2 = 15 ✓
   - n = 10: 10 × 11 / 2 = 110 / 2 = 55 ✓
   - n = 100: 100 × 101 / 2 = 10100 / 2 = 5050 ✓

4. STEP-BY-STEP EXECUTION (for n = 5):
   
   Initial: sum = 0
   
   i = 1: sum = 0 + 1 = 1
   i = 2: sum = 1 + 2 = 3
   i = 3: sum = 3 + 3 = 6
   i = 4: sum = 6 + 4 = 10
   i = 5: sum = 10 + 5 = 15
   
   Result: Sum = 15

5. WHY INITIALIZE sum TO 0:
   - Addition identity: 0 + n = n
   - Allows proper accumulation
   - Starting with any other value gives wrong result

6. FOR LOOP:
   - for (i = 1; i <= n; i++)
   - Starts from 1 (first natural number)
   - Continues while i <= n
   - Increments i by 1 each time

COMMON MISTAKES IN EXAMS:
1. Not initializing sum to 0
2. Starting loop from 0 instead of 1
3. Using i < n instead of i <= n (misses last number)
4. Forgetting to add i to sum
5. Not incrementing i (infinite loop)
6. Using wrong formula

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Variable declarations: 1 mark
- Input statement: 1 mark
- Initialization of sum: 1 mark
- For loop logic: 2-3 marks
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (n, i, sum)
3. Initialize sum = 0
4. Take input (n)
5. Use for loop from 1 to n
6. Add i to sum in each iteration
7. Display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a positive integer: 5
Output: Sum of first 5 natural numbers = 15

Input: Enter a positive integer: 10
Output: Sum of first 10 natural numbers = 55

ALTERNATIVE APPROACHES:

Method 1 (Using formula - most efficient):
    sum = n * (n + 1) / 2;
    printf("Sum = %d\n", sum);

Method 2 (Using while loop):
    i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

Method 3 (Using do-while loop):
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);

Method 4 (Using recursion - Grade 12):
    int sumNatural(int n)
    {
        if (n == 0)
            return 0;
        return n + sumNatural(n - 1);
    }

Method 5 (Counting down):
    for (i = n; i >= 1; i--)
    {
        sum += i;
    }

EXAM TIP:
- Loop method is standard and most accepted
- Formula method is fastest but show loop method in exams
- Always initialize sum = 0
- Test with small numbers: n=5 → 15, n=10 → 55

COMPARISON OF METHODS:

Loop Method:
✓ Easy to understand
✓ Shows step-by-step process
✗ Slower for large n

Formula Method:
✓ Very fast (O(1) time)
✓ Works for any n
✗ Less educational

PROOF OF FORMULA:
Sum = 1 + 2 + 3 + ... + n
Sum = n + (n-1) + (n-2) + ... + 1

Adding both:
2×Sum = (n+1) + (n+1) + (n+1) + ... + (n+1)  [n times]
2×Sum = n × (n+1)
Sum = n × (n+1) / 2

FAMOUS STORY:
- Mathematician Gauss (age 10) solved 1+2+...+100 in seconds
- Used the formula: 100 × 101 / 2 = 5050
- Teacher was amazed!

PRACTICAL APPLICATIONS:
- Series summation
- Mathematical calculations
- Algorithm analysis
- Pattern recognition

RELATED PROBLEMS:
- Sum of even numbers: 2 + 4 + 6 + ... + 2n
- Sum of odd numbers: 1 + 3 + 5 + ... + (2n-1)
- Sum of squares: 1² + 2² + 3² + ... + n²

================================================================================
*/
