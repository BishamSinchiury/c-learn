/*
================================================================================
PROGRAM TITLE: Palindrome Number Checker
PURPOSE: To check whether a given number is palindrome or not
NEB SYLLABUS TOPIC: Loops (while loop) and Arithmetic Operations
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, originalNum, reversedNum = 0, remainder;
    // num: to store input
    // originalNum: to preserve original value
    // reversedNum: to store reversed number
    // remainder: to extract last digit
    
    // Prompt user to enter a number
    printf("Enter an integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Store original number for comparison later
    originalNum = num;
    
    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;  // Extract last digit
        reversedNum = reversedNum * 10 + remainder;  // Build reversed number
        num = num / 10;  // Remove last digit from num
    }
    
    // Check if original number equals reversed number
    if (originalNum == reversedNum)
    {
        printf("%d is a PALINDROME number.\n", originalNum);
    }
    else
    {
        printf("%d is NOT a PALINDROME number.\n", originalNum);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. PALINDROME NUMBER:
   - A number that remains same when its digits are reversed
   - Examples: 121, 1331, 12321, 5, 0
   - Non-examples: 123, 1234, 567

2. WHILE LOOP:
   - Syntax: while (condition) { statements }
   - Repeats as long as condition is true
   - Used when we don't know exact number of iterations
   - Here: loop continues until num becomes 0

3. NUMBER REVERSAL LOGIC:
   Step-by-step for num = 123:
   
   Iteration 1:
   - remainder = 123 % 10 = 3
   - reversedNum = 0 * 10 + 3 = 3
   - num = 123 / 10 = 12
   
   Iteration 2:
   - remainder = 12 % 10 = 2
   - reversedNum = 3 * 10 + 2 = 32
   - num = 12 / 10 = 1
   
   Iteration 3:
   - remainder = 1 % 10 = 1
   - reversedNum = 32 * 10 + 1 = 321
   - num = 1 / 10 = 0 (loop ends)

4. WHY PRESERVE ORIGINAL NUMBER:
   - The while loop modifies 'num' to 0
   - We need original value to compare with reversed number
   - Solution: Store original in 'originalNum' before loop

5. INTEGER DIVISION:
   - In C, dividing two integers gives integer result
   - Example: 123 / 10 = 12 (not 12.3)
   - Decimal part is truncated (removed)

COMMON MISTAKES IN EXAMS:
1. Not preserving original number before reversing
2. Forgetting to initialize reversedNum to 0
3. Using num instead of originalNum in final comparison
4. Wrong formula for building reversed number
5. Using = instead of == in comparison
6. Not understanding integer division

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 6-8 marks):
- Variable declarations: 1 mark
- Input statement: 1 mark
- Preserving original number: 1 mark
- Reversal logic (while loop): 3-4 marks
- Comparison and output: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Write header comment
2. Include <stdio.h>
3. Declare all variables (num, originalNum, reversedNum, remainder)
4. Take input
5. Store original number
6. Use while loop to reverse
7. Compare and display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter an integer: 121
Output: 121 is a PALINDROME number.

Input: Enter an integer: 123
Output: 123 is NOT a PALINDROME number.

ALTERNATIVE LOGIC:

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

EXAM TIP:
- While loop is most commonly used and accepted
- Show step-by-step calculation in rough work
- Test with examples: 121 (palindrome), 123 (not palindrome)
- Remember to preserve original number!

RELATED CONCEPTS:
- This reversal logic is also used in "Reverse a Number" program
- Similar technique used in Armstrong number checking

================================================================================
*/
