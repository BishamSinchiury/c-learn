/*
================================================================================
PROGRAM TITLE: Fibonacci Series (First 10 Terms)
PURPOSE: To generate and display first 10 terms of Fibonacci series
NEB SYLLABUS TOPIC: Loops and Sequences
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int n = 10;  // Number of terms to display
    int first = 0, second = 1, next, i;
    // first: first term of series (0)
    // second: second term of series (1)
    // next: to store next term
    // i: loop counter
    
    // Display header
    printf("Fibonacci Series (First %d terms):\n", n);
    
    // Display first two terms
    printf("%d, %d", first, second);
    
    // Generate and display remaining terms
    for (i = 3; i <= n; i++)  // Start from 3 because first 2 already displayed
    {
        next = first + second;  // Next term = sum of previous two terms
        printf(", %d", next);
        
        // Update values for next iteration
        first = second;  // Move second to first
        second = next;   // Move next to second
    }
    
    printf("\n");  // New line at end
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. FIBONACCI SERIES:
   - A sequence where each number is sum of two preceding numbers
   - Starts with 0 and 1
   - Formula: F(n) = F(n-1) + F(n-2)
   - Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
   
   Explanation:
   - 1st term: 0
   - 2nd term: 1
   - 3rd term: 0 + 1 = 1
   - 4th term: 1 + 1 = 2
   - 5th term: 1 + 2 = 3
   - 6th term: 2 + 3 = 5
   - 7th term: 3 + 5 = 8
   - And so on...

2. ALGORITHM LOGIC:
   Step 1: Initialize first = 0, second = 1
   Step 2: Print first and second
   Step 3: For remaining terms:
           - Calculate next = first + second
           - Print next
           - Update: first = second, second = next
   Step 4: Repeat until n terms

3. STEP-BY-STEP EXECUTION (First 10 terms):
   
   Initial: first = 0, second = 1
   Print: 0, 1
   
   i = 3: next = 0 + 1 = 1, Print: 1, Update: first=1, second=1
   i = 4: next = 1 + 1 = 2, Print: 2, Update: first=1, second=2
   i = 5: next = 1 + 2 = 3, Print: 3, Update: first=2, second=3
   i = 6: next = 2 + 3 = 5, Print: 5, Update: first=3, second=5
   i = 7: next = 3 + 5 = 8, Print: 8, Update: first=5, second=8
   i = 8: next = 5 + 8 = 13, Print: 13, Update: first=8, second=13
   i = 9: next = 8 + 13 = 21, Print: 21, Update: first=13, second=21
   i = 10: next = 13 + 21 = 34, Print: 34, Update: first=21, second=34
   
   Output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

4. WHY START LOOP FROM i = 3:
   - We already printed first two terms (0 and 1)
   - Loop generates 3rd term onwards
   - Total terms = 2 (already printed) + 8 (from loop) = 10

5. VARIABLE UPDATE TECHNIQUE:
   - first = second: Move second value to first
   - second = next: Move next value to second
   - This "sliding window" technique is common in sequences
   - Allows us to keep track of last two numbers

COMMON MISTAKES IN EXAMS:
1. Starting loop from i = 1 instead of i = 3
2. Not initializing first = 0 and second = 1
3. Forgetting to update first and second in loop
4. Wrong update order (updating second before first)
5. Printing all terms inside loop (missing first two)
6. Using wrong formula for next term

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 6-8 marks):
- Variable declarations and initialization: 1 mark
- Printing first two terms: 1 mark
- For loop structure: 1 mark
- Calculating next term: 2 marks
- Updating variables: 2 marks
- Output formatting: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (first, second, next, i, n)
3. Initialize first = 0, second = 1
4. Print first two terms
5. Use for loop from i = 3 to n
6. Calculate next = first + second
7. Print next
8. Update first and second
9. Add proper formatting (commas, newline)

EXPECTED OUTPUT FORMAT:
Fibonacci Series (First 10 terms):
0, 1, 1, 2, 3, 5, 8, 13, 21, 34

ALTERNATIVE APPROACHES:

Method 1 (Taking n as input):
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    // Rest of code same

Method 2 (Using while loop):
    i = 3;
    while (i <= n)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
        i++;
    }

Method 3 (Using array):
    int fib[10];
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < 10; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    // Print array

Method 4 (Using recursion - Grade 12):
    int fibonacci(int n)
    {
        if (n <= 1)
            return n;
        return fibonacci(n-1) + fibonacci(n-2);
    }

EXAM TIP:
- The iterative method (shown in main program) is most efficient
- Always start with 0, 1 (not 1, 1)
- Show calculation for first few terms in rough work
- Test output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

REAL-WORLD APPLICATIONS:
- Nature: Flower petals, pine cones, shells
- Mathematics: Golden ratio
- Computer Science: Algorithm analysis
- Finance: Stock market analysis

FIBONACCI PROPERTIES:
- Every 3rd number is even
- Every 4th number is divisible by 3
- Ratio of consecutive terms approaches Golden Ratio (1.618...)

================================================================================
*/
