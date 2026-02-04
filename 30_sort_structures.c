/*
================================================================================
PROGRAM TITLE: Sort Names and Addresses Using Structures
PURPOSE: To read names and addresses, then sort them alphabetically
NEB SYLLABUS TOPIC: Structures and Sorting
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output functions
#include <string.h>  // For string functions

// Structure to store person information
struct Person
{
    char name[50];
    char address[100];
};

int main()
{
    struct Person people[50];  // Array of structures
    struct Person temp;  // Temporary structure for swapping
    int n, i, j;
    // people: array of Person structures
    // temp: for swapping
    // n: number of people
    // i, j: loop counters
    
    // Input number of people
    printf("Enter number of people: ");
    scanf("%d", &n);
    getchar();  // Clear input buffer
    
    // Input names and addresses
    printf("\nEnter details:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);
        people[i].name[strcspn(people[i].name, "\n")] = '\0';
        
        printf("Address: ");
        fgets(people[i].address, sizeof(people[i].address), stdin);
        people[i].address[strcspn(people[i].address, "\n")] = '\0';
    }
    
    // Bubble Sort by name
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // Compare names
            if (strcmp(people[j].name, people[j + 1].name) > 0)
            {
                // Swap entire structures
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    
    // Display sorted list
    printf("\n\nSorted List (Alphabetically by Name):\n");
    printf("%-30s %-50s\n", "Name", "Address");
    printf("--------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%-30s %-50s\n", people[i].name, people[i].address);
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. ARRAY OF STRUCTURES:
   - Multiple structure variables in array
   - Declaration: struct Person people[50];
   - Access: people[0].name, people[1].address, etc.

2. STRUCTURE ASSIGNMENT:
   - Can use = operator for entire structure
   - Example: temp = people[i];
   - Copies all members at once

3. SORTING STRUCTURES:
   - Compare specific member (here: name)
   - Swap entire structure
   - Maintains relationship between members

EXAM NOTES:
Expected Output:
Sorted List (Alphabetically by Name):
Name                           Address                                           
--------------------------------------------------------------------------------
Gita Sharma                    Kathmandu                                         
Hari Prasad                    Pokhara                                           
Ram Thapa                      Lalitpur                                          

================================================================================
*/
