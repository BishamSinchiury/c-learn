/*
================================================================================
PROGRAM TITLE: Store Student Records in File
PURPOSE: To store name, roll number, and percentage of 10 students in a file
NEB SYLLABUS TOPIC: File Handling (Text Files)
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output and file functions
#include <string.h>  // For string functions

// Structure to store student information
struct Student
{
    char name[50];
    int rollNumber;
    float percentage;
};

int main()
{
    struct Student s[10];  // Array of 10 students
    FILE *fp;  // File pointer
    int i;
    // s: array of student structures
    // fp: pointer to file
    // i: loop counter
    
    // Input data for 10 students
    printf("Enter details of 10 students:\n");
    for (i = 0; i < 10; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
    }
    
    // Open file for writing
    fp = fopen("students.txt", "w");
    
    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write student data to file
    fprintf(fp, "%-30s %-15s %-15s\n", "Name", "Roll Number", "Percentage");
    fprintf(fp, "---------------------------------------------------------------\n");
    
    for (i = 0; i < 10; i++)
    {
        fprintf(fp, "%-30s %-15d %-15.2f\n", 
                s[i].name, s[i].rollNumber, s[i].percentage);
    }
    
    // Close the file
    fclose(fp);
    
    printf("\nStudent records saved to students.txt successfully!\n");
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. FILE HANDLING:
   - Storing data permanently in files
   - Data persists even after program ends
   - Two types: Text files and Binary files

2. FILE POINTER:
   - Special pointer to access files
   - Declaration: FILE *fp;
   - FILE is a structure defined in <stdio.h>

3. FILE OPERATIONS:
   
   a) fopen():
      - Opens a file
      - Syntax: FILE *fp = fopen("filename", "mode");
      - Modes:
        * "r" - Read (file must exist)
        * "w" - Write (creates new or overwrites)
        * "a" - Append (adds to end)
        * "r+" - Read and write
   
   b) fprintf():
      - Writes formatted data to file
      - Syntax: fprintf(file_pointer, "format", variables);
      - Similar to printf() but writes to file
   
   c) fscanf():
      - Reads formatted data from file
      - Syntax: fscanf(file_pointer, "format", &variables);
      - Similar to scanf() but reads from file
   
   d) fclose():
      - Closes the file
      - Syntax: fclose(file_pointer);
      - IMPORTANT: Always close files after use

4. FILE MODES:
   - "w" mode: Creates new file or erases existing content
   - "a" mode: Adds to end of file
   - "r" mode: Reads existing file

5. ERROR CHECKING:
   - fopen() returns NULL if file cannot be opened
   - Always check: if (fp == NULL)
   - Good programming practice

6. STEP-BY-STEP:
   1. Declare FILE pointer
   2. Open file using fopen()
   3. Check if file opened successfully
   4. Write/Read data using fprintf()/fscanf()
   5. Close file using fclose()

COMMON MISTAKES IN EXAMS:
1. Not declaring FILE pointer
2. Forgetting to include <stdio.h>
3. Not checking if file opened successfully
4. Not closing file (fclose)
5. Wrong file mode ("r" instead of "w")
6. Using printf instead of fprintf
7. Forgetting & in fscanf for variables

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 10-12 marks):
- Structure definition: 1 mark
- FILE pointer declaration: 1 mark
- Input loop: 2 marks
- fopen() with error checking: 2 marks
- fprintf() to write data: 3-4 marks
- fclose(): 1 mark
- Success message: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Define Student structure
2. Declare array of structures
3. Declare FILE pointer
4. Input data for all students
5. Open file in write mode
6. Check if file opened successfully
7. Use fprintf() to write data
8. Close file
9. Display success message

EXPECTED OUTPUT:
Enter details of 10 students:

Student 1:
Name: Ram Sharma
Roll Number: 1
Percentage: 85.5

[... continues for 10 students ...]

Student records saved to students.txt successfully!

FILE CONTENT (students.txt):
Name                           Roll Number     Percentage     
---------------------------------------------------------------
Ram Sharma                     1               85.50          
Sita Thapa                     2               90.25          
[... continues ...]

ALTERNATIVE (Using separate file operations):

// Writing
for (i = 0; i < 10; i++)
{
    fprintf(fp, "%s\n%d\n%.2f\n", 
            s[i].name, s[i].rollNumber, s[i].percentage);
}

// Reading
for (i = 0; i < 10; i++)
{
    fscanf(fp, " %[^\n]", s[i].name);
    fscanf(fp, "%d", &s[i].rollNumber);
    fscanf(fp, "%f", &s[i].percentage);
}

EXAM TIP:
- Always declare FILE *fp;
- Use "w" mode for writing
- Use fprintf() not printf()
- Always close file with fclose()
- Check if file opened: if (fp == NULL)
- Test with 2-3 students instead of 10 for quick testing

FILE HANDLING FUNCTIONS:
- fopen() - Open file
- fclose() - Close file
- fprintf() - Write formatted data
- fscanf() - Read formatted data
- fgets() - Read string
- fputs() - Write string
- fgetc() - Read character
- fputc() - Write character

PRACTICAL APPLICATIONS:
- Student database
- Employee records
- Inventory management
- Log files
- Configuration files

IMPORTANT NOTES:
- File is created in same directory as program
- If file exists, "w" mode overwrites it
- Use "a" mode to append without erasing
- Always close files to save changes

================================================================================
*/
