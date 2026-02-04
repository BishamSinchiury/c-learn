/*
================================================================================
PROGRAM TITLE: Sum of Digits
PURPOSE: To calculate sum of digits of a given number
NEB SYLLABUS TOPIC: Loops and Arithmetic Operations
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, sum = 0, remainder;
    // num: to store input number
    // sum: to accumulate sum of digits (initialized to 0)
    // remainder: to extract each digit
    
    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Store original number for display
    int originalNum = num;
    
    // Extract digits and calculate sum
    while (num != 0)
    {
        remainder = num % 10;  // Extract last digit
        sum = sum + remainder;  // Add digit to sum
        num = num / 10;  // Remove last digit
    }
    
    // Display the result
    printf("Sum of digits of %d = %d\n", originalNum, sum);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. SUM OF DIGITS:
   - Add all individual digits of a number
   - Examples:
     * 123 → 1 + 2 + 3 = 6
     * 456 → 4 + 5 + 6 = 15
     * 9876 → 9 + 8 + 7 + 6 = 30

2. DIGIT EXTRACTION TECHNIQUE:
   - Use modulus (%) to get last digit: num % 10
   - Use division (/) to remove last digit: num / 10
   - Repeat until num becomes 0

3. STEP-BY-STEP EXECUTION (for num = 1234):
   
   Initial: num = 1234, sum = 0
   
   Iteration 1:
   - remainder = 1234 % 10 = 4
   - sum = 0 + 4 = 4
   - num = 1234 / 10 = 123
   
   Iteration 2:
   - remainder = 123 % 10 = 3
   - sum = 4 + 3 = 7
   - num = 123 / 10 = 12
   
   Iteration 3:
   - remainder = 12 % 10 = 2
   - sum = 7 + 2 = 9
   - num = 12 / 10 = 1
   
   Iteration 4:
   - remainder = 1 % 10 = 1
   - sum = 9 + 1 = 10
   - num = 1 / 10 = 0 (loop ends)
   
   Result: Sum = 10

4. WHY INITIALIZE sum TO 0:
   - Addition identity: any number + 0 = that number
   - Allows proper accumulation of digits
   - If initialized to any other value, result will be wrong

5. WHILE LOOP:
   - Continues while num != 0
   - Each iteration processes one digit
   - Number of iterations = number of digits

COMMON MISTAKES IN EXAMS:
1. Not initializing sum to 0
2. Forgetting to preserve original number
3. Using wrong operators (+ instead of %, * instead of /)
4. Not removing last digit (num = num / 10)
5. Using = instead of == in while condition
6. Infinite loop (not updating num)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Variable declarations: 1 mark
- Input statement: 1 mark
- While loop structure: 1 mark
- Digit extraction logic: 2-3 marks
- Sum calculation: 1 mark
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (num, sum, remainder, originalNum)
3. Initialize sum = 0
4. Take input
5. Preserve original number
6. Use while loop (num != 0)
7. Extract digit using % 10
8. Add to sum
9. Remove digit using / 10
10. Display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a positive integer: 1234
Output: Sum of digits of 1234 = 10

Input: Enter a positive integer: 999
Output: Sum of digits of 999 = 27

ALTERNATIVE APPROACHES:

Method 1 (Using for loop):
    for (; num != 0; num /= 10)
    {
        remainder = num % 10;
        sum += remainder;
    }

Method 2 (Using do-while):
    do
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    } while (num != 0);

Method 3 (Using recursion - Grade 12):
    int sumOfDigits(int n)
    {
        if (n == 0)
            return 0;
        return (n % 10) + sumOfDigits(n / 10);
    }

Method 4 (One-liner in loop):
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

EXAM TIP:
- While loop is most standard and accepted
- Always initialize sum = 0
- Preserve original number for display
- Show calculation for sample input in rough work
- Test with examples: 123 → 6, 456 → 15

RELATED PROGRAMS:
- Reverse a number (similar logic)
- Palindrome number (uses digit extraction)
- Armstrong number (uses digit extraction + power)
- Count digits (similar loop, count instead of sum)

PRACTICAL APPLICATIONS:
- Digital root calculation
- Checksum verification
- Number validation
- Digit analysis

VARIATIONS:
- Sum of even digits only
- Sum of odd digits only
- Product of digits
- Count of specific digit

================================================================================
*/
