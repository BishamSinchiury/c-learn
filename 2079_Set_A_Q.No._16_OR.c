/*
2079 GIE Set A Q.No. 16 Or
Describe file handling concept C. Write a C program to enter names and addresses of the student and store them in a data file "student.dat".
*/

#include <stdio.h>
#include <stdlib.h>

// Defining the structure to store student details
struct Student {
    char name[50];
    char address[100];
};

int main() {
    FILE *file;
    struct Student student;
    int numStudents, i;

    // Opening the file in binary write mode
    file = fopen("student.dat", "wb");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    // Getting the number of students to enter
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student details and write to the file
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %s", student.name);  // To read a string
        printf("Enter Address: ");
        scanf(" %s", student.address);  // To read a string

        // Writing student details to the file
        fwrite(&student, sizeof(struct Student), 1, file);
    }

    // Closing the file
    fclose(file);
    printf("\nStudent details have been saved to 'student.dat'.\n");

    return 0;
}
