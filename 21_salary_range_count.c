/*
================================================================================
PROGRAM TITLE: Count Employees by Salary Range
PURPOSE: To count employees with salary between 30000 and 50000
NEB SYLLABUS TOPIC: Arrays and Conditional Statements
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    float salary[300];  // Array to store salaries of 300 employees
    int i, count = 0;
    // salary: array to store salary values
    // i: loop counter
    // count: to count employees in range
    
    // Input salaries of 300 employees
    printf("Enter salaries of 300 employees:\n");
    for (i = 0; i < 300; i++)
    {
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &salary[i]);
    }
    
    // Count employees with salary between 30000 and 50000
    for (i = 0; i < 300; i++)
    {
        if (salary[i] >= 30000 && salary[i] <= 50000)
        {
            count++;  // Increment count
        }
    }
    
    // Display result
    printf("\nNumber of employees with salary between 30000 and 50000: %d\n", count);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. RANGE CHECKING:
   - Check if value is between two limits
   - Formula: value >= lower_limit && value <= upper_limit
   - Both conditions must be true (use &&)

2. FLOAT DATA TYPE:
   - Used for decimal numbers (salary can have paisa)
   - Format specifier: %f
   - Example: 35000.50

3. STEP-BY-STEP:
   - Read all 300 salaries into array
   - Loop through array
   - For each salary, check if in range [30000, 50000]
   - If yes, increment count
   - Display count

COMMON MISTAKES:
1. Using || instead of && (wrong logic)
2. Not including boundary values (using > and < instead of >= and <=)
3. Wrong format specifier (%d instead of %f)
4. Not initializing count to 0

EXAM NOTES:
Expected Output:
Number of employees with salary between 30000 and 50000: 45

ALTERNATIVE (for exam, use smaller number like 10 for testing):
    int n = 10;  // Test with 10 employees instead of 300
    float salary[10];

================================================================================
*/
