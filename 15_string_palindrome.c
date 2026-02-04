/*
================================================================================
PROGRAM TITLE: String Palindrome Checker
PURPOSE: To check whether a given string is palindrome or not
NEB SYLLABUS TOPIC: Strings and String Functions
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output functions
#include <string.h>  // For string functions like strlen()

int main()
{
    char str[100], reversed[100];
    int i, length, isPalindrome = 1;
    // str: to store input string
    // reversed: to store reversed string
    // i: loop counter
    // length: length of string
    // isPalindrome: flag (1=palindrome, 0=not palindrome)
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    
    // Read string from user (without spaces)
    scanf("%s", str);
    
    // Get length of string
    length = strlen(str);
    
    // Reverse the string
    for (i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];  // Copy from end to start
    }
    reversed[length] = '\0';  // Add null terminator
    
    // Compare original and reversed strings
    if (strcmp(str, reversed) == 0)
    {
        printf("\"%s\" is a PALINDROME string.\n", str);
    }
    else
    {
        printf("\"%s\" is NOT a PALINDROME string.\n", str);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. STRING PALINDROME:
   - A string that reads same forwards and backwards
   - Examples: "madam", "racecar", "noon", "level"
   - Non-examples: "hello", "world", "test"

2. STRING IN C:
   - Array of characters ending with '\0' (null terminator)
   - Declaration: char str[size];
   - '\0' marks end of string

3. STRING FUNCTIONS (string.h):
   - strlen(str): Returns length of string
   - strcmp(str1, str2): Compares two strings
     * Returns 0 if equal
     * Returns <0 if str1 < str2
     * Returns >0 if str1 > str2
   - strcpy(dest, src): Copies string

4. REVERSAL LOGIC:
   For "madam" (length=5):
   - reversed[0] = str[4] = 'm'
   - reversed[1] = str[3] = 'a'
   - reversed[2] = str[2] = 'd'
   - reversed[3] = str[1] = 'a'
   - reversed[4] = str[0] = 'm'
   - reversed[5] = '\0'

COMMON MISTAKES IN EXAMS:
1. Not including <string.h>
2. Forgetting null terminator '\0'
3. Wrong index calculation for reversal
4. Using = instead of == in strcmp
5. Not handling spaces in string

================================================================================
EXAM NOTES
================================================================================

EXPECTED INPUT/OUTPUT:
Input: Enter a string: madam
Output: "madam" is a PALINDROME string.

Input: Enter a string: hello
Output: "hello" is NOT a PALINDROME string.

ALTERNATIVE METHOD (Without reversed string):
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

================================================================================
*/
