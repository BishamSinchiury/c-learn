/*
================================================================================
PROGRAM TITLE: Count Vowels in String
PURPOSE: To count total number of vowels in a given string
NEB SYLLABUS TOPIC: Strings and Loops
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output functions
#include <string.h>  // For strlen() function
#include <ctype.h>   // For tolower() function

int main()
{
    char str[100];
    int i, length, vowelCount = 0;
    char ch;
    // str: to store input string
    // i: loop counter
    // length: length of string
    // vowelCount: to count vowels
    // ch: to store current character in lowercase
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    
    // Read string with spaces using gets() or fgets()
    fgets(str, sizeof(str), stdin);
    
    // Get length of string
    length = strlen(str);
    
    // Count vowels
    for (i = 0; i < length; i++)
    {
        // Convert character to lowercase for easier comparison
        ch = tolower(str[i]);
        
        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;  // Increment vowel count
        }
    }
    
    // Display result
    printf("Total number of vowels: %d\n", vowelCount);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. VOWELS:
   - English vowels: a, e, i, o, u (and A, E, I, O, U)
   - Total 5 vowels
   - All other letters are consonants

2. STRING INPUT WITH SPACES:
   - scanf("%s", str): Stops at first space
   - gets(str): Reads entire line (deprecated, unsafe)
   - fgets(str, size, stdin): Safe way to read line with spaces

3. CHARACTER FUNCTIONS (ctype.h):
   - tolower(ch): Converts character to lowercase
   - toupper(ch): Converts character to uppercase
   - isalpha(ch): Checks if alphabetic
   - isdigit(ch): Checks if digit

4. STEP-BY-STEP (for "Hello World"):
   
   i=0: 'H' → 'h' → not vowel
   i=1: 'e' → 'e' → vowel (count=1)
   i=2: 'l' → 'l' → not vowel
   i=3: 'l' → 'l' → not vowel
   i=4: 'o' → 'o' → vowel (count=2)
   i=5: ' ' → ' ' → not vowel
   i=6: 'W' → 'w' → not vowel
   i=7: 'o' → 'o' → vowel (count=3)
   i=8: 'r' → 'r' → not vowel
   i=9: 'l' → 'l' → not vowel
   i=10: 'd' → 'd' → not vowel
   
   Total vowels: 3

5. WHY USE tolower():
   - Avoids checking both uppercase and lowercase
   - Simplifies condition
   - Without tolower(): need to check 'a' || 'A' || 'e' || 'E' ...

COMMON MISTAKES IN EXAMS:
1. Not including <string.h> or <ctype.h>
2. Using scanf() instead of fgets() for strings with spaces
3. Not converting to lowercase (missing uppercase vowels)
4. Forgetting to initialize vowelCount to 0
5. Using = instead of == in comparison
6. Wrong OR operator (& instead of ||)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 6-8 marks):
- Header files: 1 mark
- Variable declarations: 1 mark
- String input: 1 mark
- Loop structure: 1 mark
- Vowel checking logic: 3 marks
- Output: 1 mark

EXPECTED INPUT/OUTPUT:
Input: Enter a string: Hello World
Output: Total number of vowels: 3

Input: Enter a string: Programming
Output: Total number of vowels: 3

ALTERNATIVE METHODS:

Method 1 (Without tolower - check both cases):
    if (str[i]=='a' || str[i]=='A' || 
        str[i]=='e' || str[i]=='E' ||
        str[i]=='i' || str[i]=='I' ||
        str[i]=='o' || str[i]=='O' ||
        str[i]=='u' || str[i]=='U')
    {
        vowelCount++;
    }

Method 2 (Using switch-case):
    ch = tolower(str[i]);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowelCount++;
            break;
    }

Method 3 (Using function):
    int isVowel(char c)
    {
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

EXAM TIP:
- Method shown in main program is most standard
- Remember to include <ctype.h> for tolower()
- Use fgets() for strings with spaces
- Initialize vowelCount = 0
- Test with examples: "Hello" → 2, "Programming" → 3

EXTENSIONS:
- Count consonants
- Count specific vowel (e.g., count 'a' only)
- Count vowels and consonants separately
- Display which vowels are present

PRACTICAL APPLICATIONS:
- Text analysis
- Language processing
- Data validation
- Pattern recognition

================================================================================
*/
