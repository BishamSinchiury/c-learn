/*
================================================================================
PROGRAM TITLE: Count Employees by Age Groups
PURPOSE: To count employees with age >= 60 and age < 35
NEB SYLLABUS TOPIC: Arrays and Conditional Statements
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int age[10];  // Array to store ages of 10 employees
    int i, count_senior = 0, count_young = 0;
    // age: array to store age values
    // i: loop counter
    // count_senior: count of employees with age >= 60
    // count_young: count of employees with age < 35
    
    // Input ages of 10 employees
    printf("Enter ages of 10 employees:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Employee %d age: ", i + 1);
        scanf("%d", &age[i]);
    }
    
    // Count employees by age groups
    for (i = 0; i < 10; i++)
    {
        if (age[i] >= 60)
        {
            count_senior++;  // Senior employees (age >= 60)
        }
        
        if (age[i] < 35)
        {
            count_young++;  // Young employees (age < 35)
        }
    }
    
    // Display results
    printf("\na) Number of employees with age >= 60: %d\n", count_senior);
    printf("b) Number of employees with age < 35: %d\n", count_young);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. MULTIPLE CONDITIONS:
   - Check different conditions on same data
   - Use separate if statements (not else if)
   - Each condition is independent

2. WHY SEPARATE if STATEMENTS:
   - We need to check BOTH conditions for each employee
   - Using else if would skip second check
   - Example: age=30 should be counted in young category

3. CATEGORIES:
   - Senior: age >= 60 (60, 61, 62, ...)
   - Young: age < 35 (0, 1, 2, ..., 34)
   - Middle: age between 35 and 59 (not counted here)

COMMON MISTAKES:
1. Using else if instead of separate if
2. Wrong comparison operators
3. Not initializing counters to 0
4. Counting same employee twice incorrectly

EXAM NOTES:
Expected Output (for ages: 25, 30, 45, 62, 28, 65, 40, 32, 55, 70):
a) Number of employees with age >= 60: 3
b) Number of employees with age < 35: 4

================================================================================
*/
