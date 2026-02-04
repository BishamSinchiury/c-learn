/*
================================================================================
PROGRAM TITLE: Sort 10 Numbers in Descending Order
PURPOSE: To arrange 10 numbers in descending order (largest to smallest)
NEB SYLLABUS TOPIC: Arrays and Sorting
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int arr[10];  // Array to store 10 numbers
    int i, j, temp;
    // i, j: loop counters
    // temp: for swapping
    
    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort in Descending Order
    for (i = 0; i < 9; i++)  // 9 passes for 10 numbers
    {
        for (j = 0; j < 9 - i; j++)
        {
            // If current element is smaller than next, swap
            if (arr[j] < arr[j + 1])  // Note: < for descending
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Display sorted array
    printf("\nNumbers in descending order:\n");
    for (i = 0; i < 10; i++)
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

1. DESCENDING ORDER:
   - Largest to smallest
   - Example: 9, 8, 7, 6, 5, 4, 3, 2, 1
   - Opposite of ascending order

2. KEY DIFFERENCE FROM ASCENDING:
   - Ascending: if (arr[j] > arr[j+1]) swap
   - Descending: if (arr[j] < arr[j+1]) swap
   - Just change the comparison operator!

EXAM NOTES:
Expected Output (for input 5,2,8,1,9,3,7,4,6,10):
Numbers in descending order:
10 9 8 7 6 5 4 3 2 1

================================================================================
*/
