/*
================================================================================
PROGRAM TITLE: Display Patients with Specific Disease (FEVER)
PURPOSE: To read patient.txt and display only patients suffering from FEVER
NEB SYLLABUS TOPIC: File Handling with Conditional Logic
GRADE: 12
================================================================================
*/

#include <stdio.h>   // For input/output and file functions
#include <string.h>  // For string comparison functions

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
    int found = 0;  // Flag to track if any fever patient found
    // p: patient structure variable
    // fp: pointer to file
    // found: flag (0=no fever patients, 1=found fever patients)
    
    // Open file for reading
    fp = fopen("patient.txt", "r");
    
    // Check if file exists
    if (fp == NULL)
    {
        printf("Error: patient.txt file not found!\n");
        return 1;
    }
    
    // Display header
    printf("\nPatients suffering from FEVER:\n");
    printf("%-30s %-20s %-10s %-12s\n", "Name", "Disease", "Age", "Bed Number");
    printf("------------------------------------------------------------------------\n");
    
    // Read all records and display only FEVER patients
    while (fscanf(fp, " %[^\n]", p.name) != EOF)
    {
        fscanf(fp, " %[^\n]", p.disease);
        fscanf(fp, "%d", &p.age);
        fscanf(fp, "%d", &p.bedNumber);
        
        // Check if disease is FEVER (case-insensitive comparison)
        if (strcasecmp(p.disease, "FEVER") == 0)
        {
            // Display this patient's information
            printf("%-30s %-20s %-10d %-12d\n", 
                   p.name, p.disease, p.age, p.bedNumber);
            found = 1;  // Set flag to indicate fever patient found
        }
    }
    
    // If no fever patients found
    if (found == 0)
    {
        printf("No patients suffering from FEVER.\n");
    }
    
    // Close the file
    fclose(fp);
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. CONDITIONAL FILE READING:
   - Read all records
   - Check condition for each record
   - Display only matching records

2. STRING COMPARISON:
   - strcmp(str1, str2): Case-sensitive comparison
     * Returns 0 if strings are equal
     * Returns <0 if str1 < str2
     * Returns >0 if str1 > str2
   
   - strcasecmp(str1, str2): Case-insensitive comparison
     * Same as strcmp but ignores case
     * "FEVER" == "fever" == "Fever"

3. ALGORITHM:
   Step 1: Open file
   Step 2: Read each patient record
   Step 3: Compare disease with "FEVER"
   Step 4: If match, display record
   Step 5: Continue until EOF
   Step 6: Close file

4. FLAG VARIABLE:
   - found = 0 initially (no fever patients yet)
   - Set to 1 when fever patient found
   - Used to display message if no matches

5. WHY USE strcasecmp():
   - Handles different cases: "FEVER", "fever", "Fever"
   - More user-friendly
   - Avoids missing records due to case differences

COMMON MISTAKES IN EXAMS:
1. Using == to compare strings (wrong!)
2. Not using strcmp() or strcasecmp()
3. Displaying all records instead of filtered ones
4. Not checking if any records matched
5. Case-sensitive comparison missing some records
6. Not including <string.h>

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 9-11 marks):
- Structure definition: 1 mark
- File opening and error check: 2 marks
- Reading loop with EOF: 2 marks
- String comparison logic: 3 marks
- Conditional display: 2 marks
- File closing: 1 mark

HOW TO WRITE IN NEB BOARD EXAM:
1. Define Patient structure
2. Declare FILE pointer and flag variable
3. Open file in read mode
4. Check if file opened successfully
5. Use while loop to read all records
6. Use strcmp() or strcasecmp() to compare disease
7. Display only matching records
8. Close file

EXPECTED OUTPUT:
Patients suffering from FEVER:
Name                           Disease              Age        Bed Number  
------------------------------------------------------------------------
Ram Sharma                     Fever                45         101         
Hari Prasad                    FEVER                52         105         

SAMPLE FILE (patient.txt):
Ram Sharma
Fever
45
101
Sita Thapa
Cold
32
102
Hari Prasad
FEVER
52
105
Gita Devi
Typhoid
38
103

ALTERNATIVE (Using strcmp with uppercase conversion):
char upperDisease[50];
strcpy(upperDisease, p.disease);
// Convert to uppercase
for (int i = 0; upperDisease[i]; i++)
    upperDisease[i] = toupper(upperDisease[i]);

if (strcmp(upperDisease, "FEVER") == 0)
{
    // Display
}

EXAM TIP:
- Use strcasecmp() for case-insensitive comparison
- Remember: strcmp() returns 0 when strings are equal
- Use flag variable to track if any records found
- Always close file after reading
- Test with different case variations

STRING COMPARISON FUNCTIONS:
- strcmp(s1, s2) - Case-sensitive
- strcasecmp(s1, s2) - Case-insensitive (Linux/Unix)
- stricmp(s1, s2) - Case-insensitive (Windows)
- strncmp(s1, s2, n) - Compare first n characters

PRACTICAL APPLICATIONS:
- Filtering database records
- Search functionality
- Report generation
- Data analysis
- Medical record systems

IMPORTANT NOTES:
- Never use == for string comparison
- Always use strcmp() or similar functions
- strcasecmp() is more flexible (handles case)
- Check if any records matched using flag

VARIATIONS:
- Display patients with age > 50
- Display patients in specific bed range
- Count patients with specific disease
- Search by patient name

================================================================================
*/
