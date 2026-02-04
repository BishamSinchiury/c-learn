/*
================================================================================
PROGRAM TITLE: Student Record Using Structure
PURPOSE: To store and display student information using structure
NEB SYLLABUS TOPIC: Structures
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output functions
#include <string.h>  // For string functions

// Structure definition
struct Student
{
    char name[50];      // Student name
    int rollNumber;     // Roll number
    float percentage;   // Percentage marks
};

int main()
{
    struct Student s;  // Declare structure variable
    // s: structure variable to store student data
    
    // Input student information
    printf("Enter student information:\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);  // Read name with spaces
    s.name[strcspn(s.name, "\n")] = '\0';  // Remove newline character
    
    printf("Roll Number: ");
    scanf("%d", &s.rollNumber);
    
    printf("Percentage: ");
    scanf("%f", &s.percentage);
    
    // Display student information
    printf("\n--- Student Record ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Percentage: %.2f%%\n", s.percentage);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. STRUCTURE:
   - User-defined data type
   - Groups different data types under one name
   - Syntax:
     struct structure_name
     {
         data_type member1;
         data_type member2;
         ...
     };

2. WHY USE STRUCTURES:
   - Group related data together
   - Example: Student has name, roll, percentage
   - Better organization than separate variables
   - Easy to manage multiple records

3. STRUCTURE COMPONENTS:
   a) Structure Definition:
      - Defines the template
      - Does not allocate memory
      - Example: struct Student { ... };
   
   b) Structure Variable:
      - Actual instance of structure
      - Allocates memory
      - Example: struct Student s;
   
   c) Accessing Members:
      - Use dot (.) operator
      - Example: s.name, s.rollNumber, s.percentage

4. MEMBER ACCESS:
   - Syntax: structure_variable.member_name
   - Example: s.rollNumber = 10;
   - Example: printf("%s", s.name);

5. STRUCTURE vs ARRAY:
   
   Array:
   - Same data type for all elements
   - Access by index: arr[0], arr[1]
   - Example: int marks[5];
   
   Structure:
   - Different data types
   - Access by member name: s.name, s.rollNumber
   - Example: struct Student s;

COMMON MISTAKES IN EXAMS:
1. Forgetting semicolon after structure definition
2. Not declaring structure variable
3. Using -> instead of . for normal variables
4. Wrong member access syntax
5. Not including <string.h> for string operations
6. Declaring structure inside main() (should be outside)

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 7-9 marks):
- Structure definition: 2 marks
- Structure variable declaration: 1 mark
- Input statements: 2 marks
- Member access: 2 marks
- Output statements: 2 marks

HOW TO WRITE IN NEB BOARD EXAM:
1. Define structure before main()
2. Declare members with appropriate data types
3. In main(), declare structure variable
4. Input data using member access (.)
5. Display data using member access

EXPECTED INPUT/OUTPUT:
Input:
Enter student information:
Name: Ram Sharma
Roll Number: 15
Percentage: 85.5

Output:
--- Student Record ---
Name: Ram Sharma
Roll Number: 15
Percentage: 85.50%

ALTERNATIVE (Multiple students using array):
struct Student students[10];  // Array of 10 students

for (int i = 0; i < 10; i++)
{
    printf("Enter details for student %d:\n", i+1);
    // Input for students[i]
}

ALTERNATIVE (Using typedef):
typedef struct
{
    char name[50];
    int rollNumber;
    float percentage;
} Student;

// Now can use: Student s; (without struct keyword)

EXAM TIP:
- Always define structure outside main()
- Use dot (.) operator for member access
- Remember semicolon after structure definition
- Use appropriate data types for members
- Test with sample data

STRUCTURE MEMORY:
- Memory = sum of all member sizes
- Example: char[50] + int + float = 50 + 4 + 4 = 58 bytes (approx)

PRACTICAL APPLICATIONS:
- Database records
- Student management systems
- Employee records
- Library management
- Hospital management

RELATED CONCEPTS:
- Array of structures (multiple records)
- Nested structures (structure within structure)
- Structure pointer (using ->)
- Structure as function parameter

================================================================================
*/
