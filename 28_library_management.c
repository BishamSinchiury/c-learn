/*
================================================================================
PROGRAM TITLE: Library Book Management System
PURPOSE: To store and display book records (name, id, author) in library.txt
NEB SYLLABUS TOPIC: File Handling with Structures
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output and file functions
#include <string.h>  // For string functions

// Structure to store book information
struct Book
{
    char bookName[100];
    int bookId;
    char author[50];
};

int main()
{
    struct Book b;  // Structure variable for book
    FILE *fp;  // File pointer
    int choice, n, i;
    // b: book structure variable
    // fp: pointer to file
    // choice: user's menu choice
    // n: number of books
    // i: loop counter
    
    do
    {
        // Display menu
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book Records\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:  // Add books
                printf("\nHow many books to add? ");
                scanf("%d", &n);
                
                // Open file in append mode
                fp = fopen("library.txt", "a");
                
                if (fp == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }
                
                // Input book details
                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d:\n", i + 1);
                    printf("Book Name: ");
                    scanf(" %[^\n]", b.bookName);
                    printf("Book ID: ");
                    scanf("%d", &b.bookId);
                    printf("Author: ");
                    scanf(" %[^\n]", b.author);
                    
                    // Write to file
                    fprintf(fp, "%s\n%d\n%s\n", b.bookName, b.bookId, b.author);
                }
                
                fclose(fp);
                printf("\n%d book(s) added successfully!\n", n);
                break;
                
            case 2:  // Display all books
                // Open file in read mode
                fp = fopen("library.txt", "r");
                
                if (fp == NULL)
                {
                    printf("\nNo records found. Please add books first.\n");
                    break;
                }
                
                // Display header
                printf("\n%-50s %-10s %-30s\n", "Book Name", "Book ID", "Author");
                printf("----------------------------------------------------------------------------------------\n");
                
                // Read and display all books
                while (fscanf(fp, " %[^\n]", b.bookName) != EOF)
                {
                    fscanf(fp, "%d", &b.bookId);
                    fscanf(fp, " %[^\n]", b.author);
                    
                    printf("%-50s %-10d %-30s\n", b.bookName, b.bookId, b.author);
                }
                
                fclose(fp);
                break;
                
            case 3:  // Exit
                printf("\nThank you for using Library Management System!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while (choice != 3);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. MENU-DRIVEN PROGRAM:
   - Displays menu of options
   - User selects option
   - Program performs corresponding action
   - Repeats until user exits

2. SWITCH-CASE:
   - Multi-way decision making
   - Syntax:
     switch (variable)
     {
         case value1: statements; break;
         case value2: statements; break;
         default: statements;
     }
   - break: exits switch block

3. DO-WHILE LOOP:
   - Executes at least once
   - Checks condition at end
   - Syntax:
     do
     {
         statements;
     } while (condition);

4. FILE MODES:
   - "a" (Append): Adds to end of file
     * Doesn't erase existing content
     * Creates file if doesn't exist
   - "r" (Read): Reads existing file
   - "w" (Write): Overwrites file

5. PROGRAM FLOW:
   1. Display menu
   2. Get user choice
   3. Execute corresponding case
   4. Repeat until user chooses exit

COMMON MISTAKES IN EXAMS:
1. Forgetting break in switch cases
2. Using "w" instead of "a" (erases data)
3. Not checking if file opened
4. Wrong do-while syntax
5. Missing default case in switch

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 12-15 marks):
- Structure definition: 1 mark
- Menu and do-while loop: 2 marks
- Switch-case structure: 2 marks
- Add books (case 1): 4-5 marks
- Display books (case 2): 4-5 marks
- File operations: 2 marks

HOW TO WRITE IN NEB BOARD EXAM:
1. Define Book structure
2. Create menu-driven program with do-while
3. Use switch-case for options
4. Case 1: Add books
   - Open file in append mode
   - Input and write data
5. Case 2: Display books
   - Open file in read mode
   - Read and display data
6. Case 3: Exit

EXPECTED OUTPUT:
===== Library Management System =====
1. Add Book Records
2. Display All Books
3. Exit
Enter your choice: 1

How many books to add? 2

Book 1:
Book Name: C Programming
Book ID: 101
Author: Dennis Ritchie

Book 2:
Book Name: Data Structures
Book ID: 102
Author: Tanenbaum

2 book(s) added successfully!

===== Library Management System =====
1. Add Book Records
2. Display All Books
3. Exit
Enter your choice: 2

Book Name                                          Book ID    Author                        
----------------------------------------------------------------------------------------
C Programming                                      101        Dennis Ritchie                
Data Structures                                    102        Tanenbaum                     

EXAM TIP:
- Use "a" mode to append (preserve existing data)
- Use "r" mode to read
- Always include break in switch cases
- Check if file opened successfully
- Use do-while for menu programs

MENU-DRIVEN PROGRAM STRUCTURE:
do
{
    // Display menu
    // Get choice
    switch (choice)
    {
        case 1: // Action 1
        case 2: // Action 2
        case 3: // Exit
    }
} while (choice != exit_option);

PRACTICAL APPLICATIONS:
- Library management
- Book inventory
- Student management
- Employee records
- Any database system

EXTENSIONS:
- Search book by ID
- Delete book record
- Update book information
- Sort books by name/ID
- Count total books

================================================================================
*/
