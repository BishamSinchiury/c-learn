/*
================================================================================
PROGRAM TITLE: Multiplication Table
PURPOSE: To print multiplication table of a given number
NEB SYLLABUS TOPIC: Loops (for loop)
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num, i;
    // num: number whose table is to be printed
    // i: loop counter (multiplier)
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Display table header
    printf("\nMultiplication Table of %d:\n", num);
    printf("-------------------------\n");
    
    // Generate and display table (1 to 10)
    for (i = 1; i <= 10; i++)
    {
        // Display: num × i = result
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. MULTIPLICATION TABLE:
   - Shows product of a number with 1 to 10 (or any range)
   - Example for 5:
     5 × 1 = 5
     5 × 2 = 10
     5 × 3 = 15
     ...
     5 × 10 = 50

2. FOR LOOP:
   - Perfect for fixed number of iterations
   - Syntax: for (initialization; condition; increment)
   - Here: for (i = 1; i <= 10; i++)
     * Start from 1
     * Continue while i <= 10
     * Increment i by 1 each time

3. STEP-BY-STEP EXECUTION (for num = 3):
   
   i = 1: Print "3 x 1 = 3"
   i = 2: Print "3 x 2 = 6"
   i = 3: Print "3 x 3 = 9"
   i = 4: Print "3 x 4 = 12"
   i = 5: Print "3 x 5 = 15"
   i = 6: Print "3 x 6 = 18"
   i = 7: Print "3 x 7 = 21"
   i = 8: Print "3 x 8 = 24"
   i = 9: Print "3 x 9 = 27"
   i = 10: Print "3 x 10 = 30"

4. FORMAT SPECIFIERS:
   - %d: Integer (decimal)
   - Used three times in printf:
     * First %d: num
     * Second %d: i
     * Third %d: num * i (product)

5. WHY START FROM i = 1:
   - Multiplication table traditionally starts from 1
   - Could start from 0, but 0 × num = 0 (not useful)
   - Standard range is 1 to 10

COMMON MISTAKES IN EXAMS:
1. Starting loop from 0 instead of 1
2. Wrong loop condition (i < 10 instead of i <= 10)
3. Missing format specifiers in printf
4. Not calculating product (num * i)
5. Forgetting to increment i (causes infinite loop)
6. Wrong order of values in printf

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-6 marks):
- Header and declarations: 1 mark
- Input statement: 1 mark
- For loop structure: 1 mark
- Calculation and output: 2-3 marks

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (num, i)
3. Take input from user
4. Optional: Print table header
5. Use for loop from 1 to 10
6. Inside loop: print num × i = num*i
7. Use proper formatting

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a number: 5

Output:
Multiplication Table of 5:
-------------------------
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

ALTERNATIVE APPROACHES:

Method 1 (Using while loop):
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

Method 2 (Custom range):
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    for (i = start; i <= end; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

Method 3 (Using do-while):
    i = 1;
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

Method 4 (Storing in array):
    int table[10];
    for (i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
        printf("%d x %d = %d\n", num, i+1, table[i]);
    }

EXAM TIP:
- For loop is simplest and most standard
- Always use i = 1 to i = 10 (inclusive)
- Format output neatly with proper spacing
- Test with simple numbers: 2, 5, 10

FORMATTING VARIATIONS:

Simple format:
    printf("%d x %d = %d\n", num, i, num * i);

Aligned format:
    printf("%2d x %2d = %3d\n", num, i, num * i);

With symbols:
    printf("%d × %d = %d\n", num, i, num * i);

PRACTICAL APPLICATIONS:
- Learning multiplication
- Quick reference table
- Mathematical calculations
- Teaching tool

EXTENSIONS:
- Print tables for multiple numbers
- Print table in reverse (10 to 1)
- Print only even multiples
- Print table up to n (user input)

LOOP VARIATIONS:
Counting up (standard):
    for (i = 1; i <= 10; i++)

Counting down:
    for (i = 10; i >= 1; i--)

Step by 2:
    for (i = 2; i <= 20; i += 2)

================================================================================
*/
