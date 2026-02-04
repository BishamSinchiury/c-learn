/*
================================================================================
PROGRAM TITLE: Armstrong Number Checker
PURPOSE: To check whether a given number is Armstrong number or not
NEB SYLLABUS TOPIC: Loops and Mathematical Operations
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions
#include <math.h>   // For pow() function to calculate power

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;
    // num: to store input and for processing
    // originalNum: to preserve original value
    // remainder: to extract each digit
    // result: to store sum of powers
    // n: to count number of digits
    
    // Prompt user to enter a number
    printf("Enter an integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Store original number
    originalNum = num;
    
    // Count number of digits
    while (originalNum != 0)
    {
        originalNum = originalNum / 10;  // Remove last digit
        n++;  // Increment digit count
    }
    
    // Restore original number for next calculation
    originalNum = num;
    
    // Calculate sum of nth power of each digit
    while (originalNum != 0)
    {
        remainder = originalNum % 10;  // Extract last digit
        result = result + pow(remainder, n);  // Add digit^n to result
        originalNum = originalNum / 10;  // Remove last digit
    }
    
    // Check if result equals original number
    if (result == num)
    {
        printf("%d is an ARMSTRONG number.\n", num);
    }
    else
    {
        printf("%d is NOT an ARMSTRONG number.\n", num);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. ARMSTRONG NUMBER (Narcissistic Number):
   - A number equal to sum of its digits raised to power of number of digits
   - Formula: If number has n digits, sum of (each digit)^n equals the number
   
   Examples:
   - 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
   - 370 = 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 ✓
   - 9474 = 9⁴ + 4⁴ + 7⁴ + 4⁴ = 6561 + 256 + 2401 + 256 = 9474 ✓
   - 1 = 1¹ = 1 ✓
   - 123 = 1³ + 2³ + 3³ = 1 + 8 + 27 = 36 ✗

2. pow() FUNCTION:
   - Defined in <math.h> header file
   - Syntax: pow(base, exponent)
   - Returns base raised to power exponent
   - Example: pow(5, 3) = 125

3. ALGORITHM STEPS:
   Step 1: Count number of digits (n)
   Step 2: Extract each digit
   Step 3: Calculate digit^n
   Step 4: Add to result
   Step 5: Compare result with original number

4. DETAILED EXAMPLE (153):
   
   Counting digits:
   - 153 / 10 = 15, n = 1
   - 15 / 10 = 1, n = 2
   - 1 / 10 = 0, n = 3
   
   Calculating sum:
   - digit = 3, result = 0 + 3³ = 27
   - digit = 5, result = 27 + 5³ = 152
   - digit = 1, result = 152 + 1³ = 153
   
   153 == 153, so it's Armstrong!

5. WHY TWO LOOPS:
   - First loop: Count digits
   - Second loop: Calculate sum of powers
   - Can't do both in one loop because we need total digit count first

COMMON MISTAKES IN EXAMS:
1. Not including <math.h> for pow() function
2. Not counting digits first
3. Using wrong power (using 3 for all instead of actual digit count)
4. Forgetting to restore originalNum after counting digits
5. Not initializing result to 0
6. Comparing result with originalNum instead of num

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 8-10 marks):
- Header files: 1 mark
- Variable declarations: 1 mark
- Input statement: 1 mark
- Counting digits logic: 2 marks
- Power calculation logic: 3-4 marks
- Comparison and output: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include both <stdio.h> and <math.h>
2. Declare all necessary variables
3. Take input
4. First while loop to count digits
5. Restore original number
6. Second while loop to calculate sum
7. Compare and display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter an integer: 153
Output: 153 is an ARMSTRONG number.

Input: Enter an integer: 123
Output: 123 is NOT an ARMSTRONG number.

ALTERNATIVE LOGIC:

Method 1 (Without pow() function - using manual multiplication):
    int power = 1;
    for (int i = 0; i < n; i++)
    {
        power = power * remainder;
    }
    result = result + power;

Method 2 (Using function):
    int power(int base, int exp)
    {
        int result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

EXAM TIP:
- Using pow() is simpler and more accepted
- Remember to include <math.h>
- Test with known Armstrong numbers: 0, 1, 153, 370, 371, 407
- Show calculation steps in rough work

COMMON ARMSTRONG NUMBERS TO REMEMBER:
- 1-digit: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
- 3-digit: 153, 370, 371, 407
- 4-digit: 1634, 8208, 9474

================================================================================
*/
