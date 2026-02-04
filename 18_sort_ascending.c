/*
================================================================================
PROGRAM TITLE: Sort N Numbers in Ascending Order
PURPOSE: To arrange n numbers in ascending order using Bubble Sort
NEB SYLLABUS TOPIC: Arrays and Sorting Algorithms
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int n, i, j, temp;
    int arr[100];  // Array to store numbers
    // n: count of numbers
    // i, j: loop counters
    // temp: temporary variable for swapping
    // arr: array to store numbers
    
    // Input count of numbers
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    
    // Input numbers into array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++)  // Outer loop: n-1 passes
    {
        for (j = 0; j < n - i - 1; j++)  // Inner loop: compare adjacent elements
        {
            // If current element is greater than next, swap them
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Display sorted array
    printf("\nNumbers in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. SORTING:
   - Arranging elements in specific order
   - Ascending: smallest to largest (1, 2, 3, 4, 5)
   - Descending: largest to smallest (5, 4, 3, 2, 1)

2. BUBBLE SORT:
   - Simple sorting algorithm
   - Compares adjacent elements
   - Swaps if in wrong order
   - Repeats until array is sorted
   - Called "bubble" because larger elements "bubble up" to end

3. BUBBLE SORT ALGORITHM:
   - Outer loop: n-1 passes
   - Inner loop: compare and swap adjacent elements
   - After each pass, largest element reaches its position
   - Time Complexity: O(n²)

4. SWAPPING TECHNIQUE:
   To swap two variables a and b:
   temp = a;    // Store a in temp
   a = b;       // Copy b to a
   b = temp;    // Copy temp (original a) to b

5. STEP-BY-STEP (for arr = {5, 2, 8, 1, 9}):
   
   Initial: [5, 2, 8, 1, 9]
   
   Pass 1:
   - Compare 5,2 → Swap → [2, 5, 8, 1, 9]
   - Compare 5,8 → No swap → [2, 5, 8, 1, 9]
   - Compare 8,1 → Swap → [2, 5, 1, 8, 9]
   - Compare 8,9 → No swap → [2, 5, 1, 8, 9]
   
   Pass 2:
   - Compare 2,5 → No swap → [2, 5, 1, 8, 9]
   - Compare 5,1 → Swap → [2, 1, 5, 8, 9]
   - Compare 5,8 → No swap → [2, 1, 5, 8, 9]
   
   Pass 3:
   - Compare 2,1 → Swap → [1, 2, 5, 8, 9]
   - Compare 2,5 → No swap → [1, 2, 5, 8, 9]
   
   Pass 4:
   - Compare 1,2 → No swap → [1, 2, 5, 8, 9]
   
   Final: [1, 2, 5, 8, 9]

6. WHY n-1 PASSES:
   - After n-1 passes, array is guaranteed to be sorted
   - Last element automatically in correct position

7. WHY n-i-1 IN INNER LOOP:
   - After each pass, one element is in final position
   - No need to compare already sorted elements
   - Optimization: reduces comparisons

COMMON MISTAKES IN EXAMS:
1. Wrong loop limits (using n instead of n-1)
2. Incorrect swap logic
3. Comparing arr[i] with arr[i+1] in outer loop
4. Not using temporary variable for swapping
5. Forgetting to declare temp variable
6. Wrong condition (< instead of >)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 8-10 marks):
- Array declaration and input: 2 marks
- Outer loop: 1 mark
- Inner loop: 1 mark
- Comparison logic: 2 marks
- Swapping logic: 2-3 marks
- Output: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Include <stdio.h>
2. Declare array and variables
3. Input n and array elements
4. Implement bubble sort:
   - Outer loop: i = 0 to n-2
   - Inner loop: j = 0 to n-i-2
   - Compare arr[j] and arr[j+1]
   - Swap if arr[j] > arr[j+1]
5. Display sorted array

EXPECTED INPUT/OUTPUT:
Input:
Enter how many numbers: 5
Enter 5 numbers:
5 2 8 1 9

Output:
Numbers in ascending order:
1 2 5 8 9

ALTERNATIVE APPROACHES:

Method 1 (Descending order - change > to <):
    if (arr[j] < arr[j + 1])
    {
        // Swap
    }

Method 2 (Selection Sort):
    for (i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap arr[i] and arr[minIndex]
    }

Method 3 (Optimized Bubble Sort with flag):
    int swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                // Swap
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;  // Already sorted
    }

EXAM TIP:
- Bubble sort is most commonly asked
- Remember swap logic with temp variable
- For descending order, just change > to <
- Test with example: {5, 2, 8, 1} → {1, 2, 5, 8}

SORTING ALGORITHMS COMPARISON:
- Bubble Sort: Simple, O(n²), good for small arrays
- Selection Sort: O(n²), fewer swaps
- Insertion Sort: O(n²), good for nearly sorted
- Quick Sort: O(n log n), fastest for large arrays
- Merge Sort: O(n log n), stable

PRACTICAL APPLICATIONS:
- Data organization
- Search optimization
- Ranking systems
- Database operations

================================================================================
*/
