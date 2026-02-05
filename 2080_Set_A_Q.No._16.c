/*
2080 GIE Set A Q.No. 16
What is structure? Write a program that stores five students' information (ID, Name, DOB and phone) and display them using structure.
*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int id;            // Student ID
    char name[50];     // Student Name
    char dob[15];      // Date of Birth (DOB)
    char phone[15];    // Phone Number
};

int main() {
    struct Student students[5]; // Array to store information of 5 students
    int i;
    
    // Input information for each student
    printf("Enter information for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Name: ");
        scanf("%s", students[i].name); // Read string
        printf("Enter DOB (dd-mm-yyyy): ");
        scanf("%s", students[i].dob);
        printf("Enter Phone: ");
        scanf("%s", students[i].phone);
    }
 
    // Display the information of each student
    printf("\nStudent Details:\n");
    printf("ID\tName\t\tDOB\t\tPhone\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%-10s\t%-10s\t%s\n", students[i].id, students[i].name, students[i].dob, students[i].phone);
    }

    return 0;
}
