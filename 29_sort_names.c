/*
================================================================================
PROGRAM TITLE: Sort N Student Names Alphabetically
PURPOSE: To input N student names and sort them alphabetically
NEB SYLLABUS TOPIC: String Arrays and Sorting
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output functions
#include <string.h>  // For string functions

int main()
{
    char names[50][100];  // Array to store up to 50 names (each max 100 chars)
    char temp[100];  // Temporary string for swapping
    int n, i, j;
    // names: 2D array to store student names
    // temp: for swapping strings
    // n: number of students
    // i, j: loop counters
    
    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Clear input buffer
    getchar();
    
    // Input student names
    printf("\nEnter %d student names:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        // Remove newline character
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    
    // Bubble Sort for strings (alphabetical order)
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent strings
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap strings
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    
    // Display sorted names
    printf("\nStudent names in alphabetical order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. 2D CHARACTER ARRAY (String Array):
   - Array of strings
   - Declaration: char names[rows][columns];
   - Example: char names[50][100]; (50 strings, each max 100 chars)
   - names[0] = first string, names[1] = second string, etc.

2. STRING COMPARISON:
   - strcmp(str1, str2): Compares two strings
   - Returns:
     * 0 if strings are equal
     * <0 if str1 comes before str2 alphabetically
     * >0 if str1 comes after str2 alphabetically

3. STRING COPYING:
   - strcpy(destination, source): Copies string
   - Cannot use = operator for strings
   - Example: strcpy(temp, names[i]);

4. SORTING STRINGS:
   - Same bubble sort algorithm as numbers
   - Use strcmp() instead of > operator
   - Use strcpy() instead of = for swapping

5. ALPHABETICAL ORDER:
   - A comes before B, B before C, etc.
   - Uppercase letters come before lowercase
   - strcmp() compares based on ASCII values

COMMON MISTAKES:
1. Using = to copy strings (wrong!)
2. Using > to compare strings (wrong!)
3. Not removing newline from fgets()
4. Wrong array dimensions
5. Not including <string.h>

EXAM NOTES:
Expected Output (for input: Sita, Ram, Hari, Gita):
Student names in alphabetical order:
1. Gita
2. Hari
3. Ram
4. Sita

================================================================================
*/
