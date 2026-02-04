/*
================================================================================
PROGRAM TITLE: Student Records Using fprintf and fscanf
PURPOSE: To read N student records into file and display using fprintf/fscanf
NEB SYLLABUS TOPIC: File Handling with fprintf and fscanf
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
    float marks;
};

int main()
{
    struct Student s;  // Structure variable
    FILE *fp;  // File pointer
    int n, i, choice;
    // s: student structure
    // fp: file pointer
    // n: number of students
    // i: loop counter
    // choice: menu choice
    
    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Write Student Records to File\n");
        printf("2. Read and Display Records from File\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:  // Write records
                printf("\nHow many students? ");
                scanf("%d", &n);
                
                // Open file for writing
                fp = fopen("students_data.txt", "w");
                if (fp == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }
                
                // Write number of students first
                fprintf(fp, "%d\n", n);
                
                // Input and write student records
                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d:\n", i + 1);
                    printf("Name: ");
                    scanf(" %[^\n]", s.name);
                    printf("Roll Number: ");
                    scanf("%d", &s.rollNumber);
                    printf("Marks: ");
                    scanf("%f", &s.marks);
                    
                    // Write to file using fprintf
                    fprintf(fp, "%s\n%d\n%.2f\n", s.name, s.rollNumber, s.marks);
                }
                
                fclose(fp);
                printf("\n%d record(s) saved successfully!\n", n);
                break;
                
            case 2:  // Read and display records
                // Open file for reading
                fp = fopen("students_data.txt", "r");
                if (fp == NULL)
                {
                    printf("\nNo records found! Please add records first.\n");
                    break;
                }
                
                // Read number of students
                fscanf(fp, "%d", &n);
                
                // Display header
                printf("\n%-30s %-15s %-10s\n", "Name", "Roll Number", "Marks");
                printf("---------------------------------------------------------------\n");
                
                // Read and display all records using fscanf
                for (i = 0; i < n; i++)
                {
                    fscanf(fp, " %[^\n]", s.name);
                    fscanf(fp, "%d", &s.rollNumber);
                    fscanf(fp, "%f", &s.marks);
                    
                    printf("%-30s %-15d %-10.2f\n", s.name, s.rollNumber, s.marks);
                }
                
                fclose(fp);
                break;
                
            case 3:  // Exit
                printf("\nThank you!\n");
                break;
                
            default:
                printf("\nInvalid choice!\n");
        }
        
    } while (choice != 3);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. fprintf():
   - Formatted write to file
   - Syntax: fprintf(file_pointer, "format", variables);
   - Similar to printf() but writes to file
   - Example: fprintf(fp, "%s\n%d\n", name, roll);

2. fscanf():
   - Formatted read from file
   - Syntax: fscanf(file_pointer, "format", &variables);
   - Similar to scanf() but reads from file
   - Example: fscanf(fp, "%s", name);

3. FILE STRUCTURE:
   First line: number of students
   Then for each student:
   - Name (string)
   - Roll number (integer)
   - Marks (float)

4. WHY STORE COUNT:
   - Helps in reading exact number of records
   - Avoids reading beyond file
   - Makes file self-describing

COMMON MISTAKES:
1. Not storing count of records
2. Wrong format specifiers
3. Not checking if file opened
4. Using printf/scanf instead of fprintf/fscanf
5. Not closing file

EXAM NOTES:
Expected Output:
Name                           Roll Number     Marks     
---------------------------------------------------------------
Ram Sharma                     1               85.50     
Sita Thapa                     2               92.00     
Hari Prasad                    3               78.75     

FILE CONTENT (students_data.txt):
3
Ram Sharma
1
85.50
Sita Thapa
2
92.00
Hari Prasad
3
78.75

================================================================================
*/
