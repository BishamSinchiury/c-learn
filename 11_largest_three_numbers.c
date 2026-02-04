/*
================================================================================
PROGRAM TITLE: Largest Among Three Numbers
PURPOSE: To find the greatest number among three given numbers
NEB SYLLABUS TOPIC: Conditional Statements (if-else, nested if)
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num1, num2, num3, largest;
    // num1, num2, num3: three numbers to compare
    // largest: to store the largest number
    
    // Prompt user to enter three numbers
    printf("Enter three numbers: ");
    
    // Read three numbers from user
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Method 1: Using nested if-else
    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;  // num1 is largest
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;  // num2 is largest
    }
    else
    {
        largest = num3;  // num3 is largest
    }
    
    // Display the result
    printf("The largest number is: %d\n", largest);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. COMPARISON OPERATORS:
   - > : Greater than
   - < : Less than
   - >= : Greater than or equal to
   - <= : Less than or equal to
   - == : Equal to
   - != : Not equal to

2. LOGICAL OPERATORS:
   - && : AND (both conditions must be true)
   - || : OR (at least one condition must be true)
   - ! : NOT (negation)

3. ALGORITHM LOGIC:
   - Check if num1 is greater than or equal to both num2 and num3
   - If yes, num1 is largest
   - Otherwise, check if num2 is greater than or equal to both
   - If yes, num2 is largest
   - Otherwise, num3 is largest

4. WHY USE >= INSTEAD OF >:
   - Handles case when numbers are equal
   - Example: If all three are 5, any can be considered largest
   - Using >= ensures we get a result even with equal numbers

5. STEP-BY-STEP EXECUTION:
   
   Example 1: num1=10, num2=5, num3=8
   - Check: 10 >= 5 && 10 >= 8 → TRUE
   - largest = 10
   
   Example 2: num1=3, num2=9, num3=6
   - Check: 3 >= 9 && 3 >= 6 → FALSE
   - Check: 9 >= 3 && 9 >= 6 → TRUE
   - largest = 9
   
   Example 3: num1=2, num2=4, num3=7
   - Check: 2 >= 4 && 2 >= 7 → FALSE
   - Check: 4 >= 2 && 4 >= 7 → FALSE
   - largest = 7

6. NESTED IF-ELSE:
   - if-else inside another if-else
   - Allows multiple conditions to be checked
   - Executes only one block based on conditions

COMMON MISTAKES IN EXAMS:
1. Using > instead of >= (fails when numbers are equal)
2. Using || (OR) instead of && (AND)
3. Wrong logic (checking only two numbers)
4. Not using else if (using multiple if statements)
5. Missing curly braces {}
6. Using = instead of == for comparison

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-7 marks):
- Header and declarations: 1 mark
- Input statement: 1 mark
- Comparison logic: 3-4 marks
- Output statement: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables (num1, num2, num3, largest)
3. Take input (three numbers)
4. Use if-else if-else structure
5. Check conditions using && operator
6. Assign largest value
7. Display result

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter three numbers: 10 5 8
Output: The largest number is: 10

Input: Enter three numbers: 3 9 6
Output: The largest number is: 9

ALTERNATIVE APPROACHES:

Method 1 (Without extra variable):
    if (num1 >= num2 && num1 >= num3)
        printf("Largest: %d\n", num1);
    else if (num2 >= num3)
        printf("Largest: %d\n", num2);
    else
        printf("Largest: %d\n", num3);

Method 2 (Using ternary operator):
    largest = (num1 >= num2) ? 
              ((num1 >= num3) ? num1 : num3) : 
              ((num2 >= num3) ? num2 : num3);

Method 3 (Sequential comparison):
    largest = num1;
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

Method 4 (Using function):
    int findLargest(int a, int b, int c)
    {
        if (a >= b && a >= c)
            return a;
        else if (b >= c)
            return b;
        else
            return c;
    }

EXAM TIP:
- Method 1 (shown in main program) is most standard
- Use >= to handle equal numbers
- Use && (AND) operator correctly
- Test with different cases:
  * All different: 10, 5, 8
  * Two equal: 5, 5, 3
  * All equal: 7, 7, 7

TRUTH TABLE FOR && (AND):
Condition1 | Condition2 | Result
-----------|------------|-------
   TRUE    |    TRUE    |  TRUE
   TRUE    |    FALSE   |  FALSE
   FALSE   |    TRUE    |  FALSE
   FALSE   |    FALSE   |  FALSE

RELATED PROGRAMS:
- Smallest among three numbers (similar logic)
- Largest among n numbers (uses arrays)
- Sorting three numbers

PRACTICAL APPLICATIONS:
- Finding maximum value
- Decision making
- Comparison operations
- Grade calculation

EXTENSIONS:
- Find smallest among three
- Find middle value
- Sort three numbers
- Find largest among n numbers

================================================================================
*/
