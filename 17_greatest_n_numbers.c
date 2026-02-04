/*
================================================================================
PROGRAM TITLE: Greatest Number Among N Numbers
PURPOSE: To find the largest number among n numbers using array
NEB SYLLABUS TOPIC: Arrays (1D Array)
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int n, i, max;
    int arr[100];  // Array to store numbers (max 100)
    // n: how many numbers
    // i: loop counter
    // max: to store maximum number
    // arr: array to store all numbers
    
    // Prompt user to enter count of numbers
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    // Input numbers into array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);  // Store in array at index i
    }
    
    // Assume first number is maximum
    max = arr[0];
    
    // Compare with remaining numbers
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];  // Update max if current number is larger
        }
    }
    
    // Display result
    printf("\nThe greatest number is: %d\n", max);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. ARRAY:
   - Collection of elements of same data type
   - Stored in contiguous memory locations
   - Declaration: data_type array_name[size];
   - Example: int arr[10]; (array of 10 integers)

2. ARRAY INDEXING:
   - Arrays are 0-indexed in C
   - First element: arr[0]
   - Last element: arr[n-1] (where n is size)
   - Example: int arr[5] has indices 0, 1, 2, 3, 4

3. ALGORITHM:
   Step 1: Input n numbers into array
   Step 2: Assume first element (arr[0]) is maximum
   Step 3: Compare with each remaining element
   Step 4: If any element is greater, update max
   Step 5: Display max

4. STEP-BY-STEP (for arr = {10, 5, 20, 15, 8}):
   
   Initial: max = arr[0] = 10
   
   i=1: arr[1]=5, 5 > 10? No, max=10
   i=2: arr[2]=20, 20 > 10? Yes, max=20
   i=3: arr[3]=15, 15 > 20? No, max=20
   i=4: arr[4]=8, 8 > 20? No, max=20
   
   Result: max = 20

5. WHY START FROM arr[0]:
   - Need initial value to compare with
   - First element is good starting point
   - Could also use arr[0] or very small number like -999999

6. LOOP RANGES:
   Input loop: for (i = 0; i < n; i++)
   - Starts from 0, goes to n-1
   - Fills entire array
   
   Comparison loop: for (i = 1; i < n; i++)
   - Starts from 1 (skip first element as it's already in max)
   - Compares remaining elements

COMMON MISTAKES IN EXAMS:
1. Not declaring array with sufficient size
2. Starting comparison loop from 0 instead of 1
3. Using i <= n instead of i < n (array overflow)
4. Not initializing max
5. Wrong array indexing
6. Forgetting to update max inside if condition

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 7-9 marks):
- Array declaration: 1 mark
- Input loop: 2 marks
- Initialization of max: 1 mark
- Comparison logic: 3-4 marks
- Output: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare variables and array
3. Input n (count of numbers)
4. Use loop to input numbers into array
5. Initialize max = arr[0]
6. Use loop to compare and find maximum
7. Display result

EXPECTED INPUT/OUTPUT:
Input:
Enter how many numbers: 5
Enter 5 numbers:
Number 1: 10
Number 2: 5
Number 3: 20
Number 4: 15
Number 5: 8

Output:
The greatest number is: 20

ALTERNATIVE APPROACHES:

Method 1 (Without assuming first element):
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

Method 2 (Using very small initial value):
    max = -999999;  // Very small number
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

Method 3 (Finding index of maximum):
    int maxIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    printf("Max: %d at position %d\n", arr[maxIndex], maxIndex+1);

Method 4 (Using function):
    int findMax(int arr[], int n)
    {
        int max = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > max)
                max = arr[i];
        return max;
    }

EXAM TIP:
- Method shown in main program is most standard
- Always initialize max before comparison
- Start comparison loop from index 1
- Test with examples: {10, 5, 20, 15} → 20

RELATED PROGRAMS:
- Find smallest number (use < instead of >)
- Find second largest
- Find both max and min
- Sort array in ascending/descending order

ARRAY CONCEPTS:
- Declaration: int arr[size];
- Initialization: int arr[5] = {1, 2, 3, 4, 5};
- Access: arr[index]
- Size: sizeof(arr) / sizeof(arr[0])

PRACTICAL APPLICATIONS:
- Data analysis
- Finding extremes
- Statistical calculations
- Comparison operations

================================================================================
*/
