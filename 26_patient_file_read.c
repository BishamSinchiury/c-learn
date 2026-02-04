/*
================================================================================
PROGRAM TITLE: Display Patient Records from File
PURPOSE: To read and display all patient records from patient.txt file
NEB SYLLABUS TOPIC: File Handling (Reading from Files)
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output and file functions
#include <string.h>  // For string functions

// Structure to store patient information
struct Patient
{
    char name[50];
    char disease[50];
    int age;
    int bedNumber;
};

int main()
{
    struct Patient p;  // Structure variable for patient
    FILE *fp;  // File pointer
    // p: patient structure variable
    // fp: pointer to file
    
    // Open file for reading
    fp = fopen("patient.txt", "r");
    
    // Check if file exists and opened successfully
    if (fp == NULL)
    {
        printf("Error: patient.txt file not found!\n");
        printf("Please create the file first.\n");
        return 1;
    }
    
    // Display header
    printf("\n%-30s %-20s %-10s %-12s\n", "Name", "Disease", "Age", "Bed Number");
    printf("------------------------------------------------------------------------\n");
    
    // Read and display all patient records
    while (fscanf(fp, " %[^\n]", p.name) != EOF)
    {
        fscanf(fp, " %[^\n]", p.disease);
        fscanf(fp, "%d", &p.age);
        fscanf(fp, "%d", &p.bedNumber);
        
        // Display patient information
        printf("%-30s %-20s %-10d %-12d\n", 
               p.name, p.disease, p.age, p.bedNumber);
    }
    
    // Close the file
    fclose(fp);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. READING FROM FILE:
   - Use "r" mode in fopen()
   - File must exist before reading
   - Use fscanf() to read formatted data

2. EOF (End Of File):
   - Special marker indicating end of file
   - fscanf() returns EOF when no more data
   - Used in while loop to read all records

3. WHILE LOOP FOR FILE READING:
   - while (fscanf(...) != EOF)
   - Continues until end of file
   - Automatically stops when all data is read

4. FILE FORMAT (patient.txt):
   Ram Sharma
   Fever
   45
   101
   Sita Thapa
   Cold
   32
   102
   [... more records ...]

5. READING PATTERN:
   - Read name (string with spaces)
   - Read disease (string with spaces)
   - Read age (integer)
   - Read bed number (integer)
   - Repeat until EOF

6. FORMAT SPECIFIER " %[^\n]":
   - Space before % skips whitespace
   - %[^\n] reads until newline
   - Allows reading strings with spaces

COMMON MISTAKES IN EXAMS:
1. Using "w" mode instead of "r" for reading
2. Not checking if file exists (fp == NULL)
3. Not using EOF in while loop
4. Wrong format specifiers in fscanf()
5. Forgetting to close file
6. Not handling file not found error

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 8-10 marks):
- Structure definition: 1 mark
- FILE pointer and fopen(): 2 marks
- Error checking: 1 mark
- While loop with EOF: 2 marks
- fscanf() statements: 2-3 marks
- Display and fclose(): 2 marks

HOW TO WRITE IN NEB BOARD EXAM:
1. Define Patient structure
2. Declare FILE pointer
3. Open file in read mode ("r")
4. Check if file opened successfully
5. Use while loop with EOF condition
6. Read data using fscanf()
7. Display data using printf()
8. Close file

EXPECTED OUTPUT:
Name                           Disease              Age        Bed Number  
------------------------------------------------------------------------
Ram Sharma                     Fever                45         101         
Sita Thapa                     Cold                 32         102         
Hari Prasad                    Typhoid              28         103         

CREATING TEST FILE (patient.txt):
Before running program, create patient.txt with:
Ram Sharma
Fever
45
101
Sita Thapa
Cold
32
102

ALTERNATIVE (Using fgets for strings):
while (fgets(p.name, sizeof(p.name), fp) != NULL)
{
    p.name[strcspn(p.name, "\n")] = '\0';  // Remove newline
    fgets(p.disease, sizeof(p.disease), fp);
    p.disease[strcspn(p.disease, "\n")] = '\0';
    fscanf(fp, "%d", &p.age);
    fscanf(fp, "%d\n", &p.bedNumber);
    
    printf("%-30s %-20s %-10d %-12d\n", 
           p.name, p.disease, p.age, p.bedNumber);
}

EXAM TIP:
- Use "r" mode for reading
- Check if file exists before reading
- Use EOF to detect end of file
- Format output nicely with %-width
- Always close file

FILE READING FUNCTIONS:
- fscanf() - Read formatted data
- fgets() - Read line
- fgetc() - Read character
- fread() - Read block of data

PRACTICAL APPLICATIONS:
- Hospital management
- Patient database
- Medical records
- Report generation

IMPORTANT NOTES:
- File must exist before reading
- "r" mode doesn't create new file
- EOF indicates end of file
- Always check if file opened successfully

================================================================================
*/
