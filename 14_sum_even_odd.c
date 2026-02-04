/*
================================================================================
PROGRAM TITLE: Sum of Even and Odd Numbers (1 to 50)
PURPOSE: To calculate sum of even and odd numbers from 1 to 50
NEB SYLLABUS TOPIC: Loops and Conditional Statements
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int i, evenSum = 0, oddSum = 0;
    // i: loop counter
    // evenSum: to accumulate sum of even numbers
    // oddSum: to accumulate sum of odd numbers
    
    // Loop through numbers from 1 to 50
    for (i = 1; i <= 50; i++)
    {
        // Check if number is even
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;  // Add to even sum
        }
        else  // Number is odd
        {
            oddSum = oddSum + i;  // Add to odd sum
        }
    }
    
    // Display results
    printf("Sum of even numbers (1-50): %d\n", evenSum);
    printf("Sum of odd numbers (1-50): %d\n", oddSum);
    printf("Total sum: %d\n", evenSum + oddSum);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. EVEN NUMBERS (1-50):
   2, 4, 6, 8, 10, ..., 48, 50
   Sum = 2 + 4 + 6 + ... + 50 = 650

2. ODD NUMBERS (1-50):
   1, 3, 5, 7, 9, ..., 47, 49
   Sum = 1 + 3 + 5 + ... + 49 = 625

3. FORMULAS:
   Sum of even numbers (2 to 2n) = n(n+1)
   For 1-50: n=25, Sum = 25×26 = 650
   
   Sum of odd numbers (1 to 2n-1) = n²
   For 1-50: n=25, Sum = 25² = 625

COMMON MISTAKES IN EXAMS:
1. Not initializing sums to 0
2. Using wrong loop range
3. Incorrect even/odd check
4. Adding to wrong sum variable

================================================================================
EXAM NOTES
================================================================================

EXPECTED OUTPUT:
Sum of even numbers (1-50): 650
Sum of odd numbers (1-50): 625
Total sum: 1275

ALTERNATIVE:
Method 1 (Using formulas):
    evenSum = 25 * 26;  // 650
    oddSum = 25 * 25;   // 625

Method 2 (Separate loops):
    for (i = 2; i <= 50; i += 2)
        evenSum += i;
    for (i = 1; i <= 50; i += 2)
        oddSum += i;

================================================================================
*/
