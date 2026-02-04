/*
================================================================================
PROGRAM TITLE: Reverse a Number
PURPOSE: To reverse the digits of a given number
NEB SYLLABUS TOPIC: Loops and Arithmetic Operations
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, reversedNum = 0, remainder;
    // num: to store input number
    // reversedNum: to build reversed number (initialized to 0)
    // remainder: to extract each digit
    
    // Prompt user to enter a number
    printf("Enter an integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Store original number for display
    int originalNum = num;
    
    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;  // Extract last digit
        reversedNum = reversedNum * 10 + remainder;  // Build reversed number
        num = num / 10;  // Remove last digit
    }
    
    // Display the result
    printf("Reversed number of %d = %d\n", originalNum, reversedNum);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. NUMBER REVERSAL:
   - Reverse the order of digits
   - Examples:
     * 123 → 321
     * 456 → 654
     * 1200 → 21 (leading zeros removed)
     * 5 → 5

2. REVERSAL ALGORITHM:
   - Extract last digit using % 10
   - Build reversed number: reversedNum = reversedNum * 10 + digit
   - Remove last digit using / 10
   - Repeat until number becomes 0

3. DETAILED STEP-BY-STEP (for num = 1234):
   
   Initial: num = 1234, reversedNum = 0
   
   Iteration 1:
   - remainder = 1234 % 10 = 4
   - reversedNum = 0 * 10 + 4 = 4
   - num = 1234 / 10 = 123
   
   Iteration 2:
   - remainder = 123 % 10 = 3
   - reversedNum = 4 * 10 + 3 = 43
   - num = 123 / 10 = 12
   
   Iteration 3:
   - remainder = 12 % 10 = 2
   - reversedNum = 43 * 10 + 2 = 432
   - num = 12 / 10 = 1
   
   Iteration 4:
   - remainder = 1 % 10 = 1
   - reversedNum = 432 * 10 + 1 = 4321
   - num = 1 / 10 = 0 (loop ends)
   
   Result: Reversed = 4321

4. KEY FORMULA:
   reversedNum = reversedNum * 10 + remainder
   
   Explanation:
   - Multiply by 10: Shifts existing digits left
   - Add remainder: Places new digit at rightmost position
   - Example: 43 * 10 + 2 = 430 + 2 = 432

5. WHY INITIALIZE reversedNum TO 0:
   - Starting point for building reversed number
   - 0 * 10 + digit = digit (first digit)
   - Any other value would give wrong result

6. TRAILING ZEROS:
   - Original: 1200
   - Reversed: 21 (not 0021)
   - Leading zeros are automatically removed in integer

COMMON MISTAKES IN EXAMS:
1. Not initializing reversedNum to 0
2. Wrong formula (using + instead of * 10)
3. Not preserving original number
4. Forgetting to remove last digit (num / 10)
5. Using = instead of == in while condition
6. Confusing with palindrome check

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Variable declarations: 1 mark
- Input statement: 1 mark
- While loop structure: 1 mark
- Reversal logic: 3 marks
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (num, reversedNum, remainder, originalNum)
3. Initialize reversedNum = 0
4. Take input
5. Preserve original number
6. Use while loop (num != 0)
7. Extract digit: remainder = num % 10
8. Build reversed: reversedNum = reversedNum * 10 + remainder
9. Remove digit: num = num / 10
10. Display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter an integer: 1234
Output: Reversed number of 1234 = 4321

Input: Enter an integer: 500
Output: Reversed number of 500 = 5

ALTERNATIVE APPROACHES:

Method 1 (Using for loop):
    for (; num != 0; num /= 10)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

Method 2 (Using do-while):
    do
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num != 0);

Method 3 (Using recursion - Grade 12):
    int reverse(int num, int rev)
    {
        if (num == 0)
            return rev;
        return reverse(num / 10, rev * 10 + num % 10);
    }

Method 4 (Compact version):
    while (num != 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

EXAM TIP:
- While loop is most standard
- Remember the formula: reversedNum * 10 + digit
- Preserve original number for display
- Show calculation step-by-step in rough work
- Test: 123 → 321, 1000 → 1

RELATED PROGRAMS:
- Palindrome number (uses same reversal logic)
- Armstrong number (uses digit extraction)
- Sum of digits (similar loop structure)

PRACTICAL APPLICATIONS:
- Palindrome checking
- Number manipulation
- Data validation
- Cryptography basics

SPECIAL CASES:
- Single digit: 5 → 5
- Trailing zeros: 1200 → 21
- Negative numbers: -123 → -321 (need to handle sign)

FORMULA BREAKDOWN:
reversedNum = reversedNum * 10 + remainder
             ↓              ↓
        Shift left    Add new digit

Example: Building 4321 from 1234
0 → 4 → 43 → 432 → 4321

================================================================================
*/
