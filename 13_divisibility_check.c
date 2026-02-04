/*
================================================================================
PROGRAM TITLE: Check Divisibility by 5 but not by 7
PURPOSE: To check if a number is divisible by 5 but not divisible by 7
NEB SYLLABUS TOPIC: Conditional Statements and Logical Operators
GRADE: 11
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int num;
    // num: number to check
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    
    // Read the number from user
    scanf("%d", &num);
    
    // Check if divisible by 5 AND not divisible by 7
    if (num % 5 == 0 && num % 7 != 0)
    {
        printf("%d is divisible by 5 but not by 7.\n", num);
    }
    else
    {
        printf("%d does not satisfy the condition.\n", num);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. DIVISIBILITY:
   - A number is divisible by another if remainder is 0
   - Check using modulus operator: num % divisor == 0
   - Examples:
     * 10 % 5 = 0 (10 is divisible by 5)
     * 10 % 3 = 1 (10 is NOT divisible by 3)

2. LOGICAL AND (&&):
   - Both conditions must be true
   - Syntax: condition1 && condition2
   - Result is true only if BOTH are true

3. NOT EQUAL (!=):
   - Checks if two values are different
   - num % 7 != 0 means "NOT divisible by 7"
   - Opposite of == (equal to)

4. CONDITION BREAKDOWN:
   num % 5 == 0  →  Divisible by 5
   num % 7 != 0  →  NOT divisible by 7
   
   Combined: (num % 5 == 0) && (num % 7 != 0)
   Both must be true

5. EXAMPLES:
   
   num = 10:
   - 10 % 5 = 0 ✓ (divisible by 5)
   - 10 % 7 = 3 ≠ 0 ✓ (not divisible by 7)
   - Result: SATISFIES condition
   
   num = 35:
   - 35 % 5 = 0 ✓ (divisible by 5)
   - 35 % 7 = 0 ✗ (divisible by 7)
   - Result: DOES NOT satisfy condition
   
   num = 14:
   - 14 % 5 = 4 ≠ 0 ✗ (not divisible by 5)
   - 14 % 7 = 0 (divisible by 7)
   - Result: DOES NOT satisfy condition
   
   num = 20:
   - 20 % 5 = 0 ✓ (divisible by 5)
   - 20 % 7 = 6 ≠ 0 ✓ (not divisible by 7)
   - Result: SATISFIES condition

6. TRUTH TABLE FOR &&:
   Div by 5 | Not Div by 7 | Result
   ---------|--------------|-------
     TRUE   |     TRUE     |  TRUE
     TRUE   |     FALSE    |  FALSE
     FALSE  |     TRUE     |  FALSE
     FALSE  |     FALSE    |  FALSE

COMMON MISTAKES IN EXAMS:
1. Using || (OR) instead of && (AND)
2. Using = instead of == for comparison
3. Forgetting != for "not divisible"
4. Wrong logic: checking divisible by 7 instead of NOT divisible
5. Missing parentheses in complex conditions
6. Using num / 5 instead of num % 5

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 5-6 marks):
- Header and declarations: 1 mark
- Input statement: 1 mark
- Condition logic: 2-3 marks
- Output statements: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variable (num)
3. Take input
4. Write if condition:
   - Check num % 5 == 0 (divisible by 5)
   - AND num % 7 != 0 (not divisible by 7)
5. Display appropriate message

EXPECTED INPUT/OUTPUT FORMAT:
Input: Enter a number: 10
Output: 10 is divisible by 5 but not by 7.

Input: Enter a number: 35
Output: 35 does not satisfy the condition.

Input: Enter a number: 20
Output: 20 is divisible by 5 but not by 7.

ALTERNATIVE APPROACHES:

Method 1 (Nested if):
    if (num % 5 == 0)
    {
        if (num % 7 != 0)
        {
            printf("Satisfies condition\n");
        }
        else
        {
            printf("Does not satisfy\n");
        }
    }
    else
    {
        printf("Does not satisfy\n");
    }

Method 2 (Separate checks):
    int divBy5 = (num % 5 == 0);
    int notDivBy7 = (num % 7 != 0);
    
    if (divBy5 && notDivBy7)
    {
        printf("Satisfies condition\n");
    }

Method 3 (Using ternary operator):
    (num % 5 == 0 && num % 7 != 0) ? 
        printf("Satisfies\n") : 
        printf("Does not satisfy\n");

EXAM TIP:
- Single if-else with && is simplest and most standard
- Remember: && means BOTH conditions must be true
- Use != for "not divisible"
- Test with examples:
  * 10 → Satisfies
  * 35 → Does not satisfy (divisible by both)
  * 14 → Does not satisfy (not divisible by 5)
  * 20 → Satisfies

NUMBERS THAT SATISFY (1-50):
5, 10, 15, 20, 25, 30, 40, 45, 50
(NOT 35 because it's divisible by both 5 and 7)

NUMBERS THAT DON'T SATISFY:
- Not divisible by 5: 1, 2, 3, 4, 6, 7, 8, 9, 11, ...
- Divisible by both 5 and 7: 35, 70, 105, ...

RELATED CONCEPTS:
- Modulus operator (%)
- Logical operators (&&, ||, !)
- Comparison operators (==, !=, <, >, <=, >=)
- Divisibility rules

PRACTICAL APPLICATIONS:
- Number filtering
- Data validation
- Conditional logic
- Business rules

VARIATIONS:
- Divisible by 3 but not by 5
- Divisible by 2 or 3
- Divisible by both 4 and 6
- Not divisible by any of 2, 3, 5

================================================================================
*/
