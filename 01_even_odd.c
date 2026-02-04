/*
================================================================================
PROGRAM TITLE: Even or Odd Number Checker
PURPOSE: To check whether a given number is even or odd
NEB SYLLABUS TOPIC: Conditional Statements (if-else)
GRADE: 11
================================================================================
*/

#include <stdio.h>  // Included for input/output functions like printf() and scanf()

int main()  // Main function - program execution starts here
{
    int num;  // Variable to store the number entered by user
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    
    // Read the number from user and store it in variable 'num'
    scanf("%d", &num);
    
    // Check if number is divisible by 2
    // If remainder is 0 when divided by 2, it's even
    if (num % 2 == 0)
    {
        printf("%d is an EVEN number.\n", num);
    }
    else  // If remainder is not 0, it's odd
    {
        printf("%d is an ODD number.\n", num);
    }
    
    return 0;  // Return 0 to indicate successful program execution
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. CONDITIONAL STATEMENTS (if-else):
   - Used to make decisions in programs
   - Syntax: if (condition) { statements } else { statements }
   - Condition must be a boolean expression (true/false)
   
2. MODULUS OPERATOR (%):
   - Returns the remainder of division
   - Example: 10 % 3 = 1 (10 divided by 3 gives remainder 1)
   - Used to check divisibility
   
3. EVEN NUMBERS:
   - Numbers divisible by 2 (remainder 0)
   - Examples: 2, 4, 6, 8, 10, 12...
   
4. ODD NUMBERS:
   - Numbers NOT divisible by 2 (remainder 1)
   - Examples: 1, 3, 5, 7, 9, 11...

WHY WE USE if-else:
- To execute different code based on conditions
- Makes programs interactive and intelligent
- Essential for decision-making in programming

COMMON MISTAKES IN EXAMS:
1. Using = instead of == in condition (= is assignment, == is comparison)
2. Forgetting to include <stdio.h>
3. Not using %d format specifier in scanf/printf
4. Missing semicolons at end of statements
5. Forgetting curly braces {} for if-else blocks

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Header files and declarations: 1 mark
- Input statement: 1 mark
- Logic (if-else with modulus): 2-3 marks
- Output statements: 1 mark
- Syntax correctness: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Start with header comment (program title, purpose)
2. Include necessary header files
3. Declare main() function
4. Declare variables with meaningful names
5. Write input statements with clear prompts
6. Implement logic using if-else
7. Display output with proper formatting
8. End with return 0

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a number: 10
Output: 10 is an EVEN number.

Input: Enter a number: 7
Output: 7 is an ODD number.

ALTERNATIVE LOGIC:
Method 1 (using ternary operator):
    (num % 2 == 0) ? printf("EVEN") : printf("ODD");

Method 2 (using bitwise AND):
    if (num & 1)  // If last bit is 1, it's odd
        printf("ODD");
    else
        printf("EVEN");

Note: Stick to Method 1 (if-else) in exams as it's clearest and most standard.

================================================================================
*/
