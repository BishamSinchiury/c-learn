/*
2079 GIE Set A Q.No. 16
Write a C program to enter name, grade, age and address of 10 students in a structure and display the information.
*/

#include <stdio.h>

// Defining the structure to store student details
struct Student {
    char name[50];
    char grade[5];
    int age;
    char address[100];
};

int main() {
    struct Student students[10];  // Array to store details of 10 students
    int i;

    // Input student details
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %s", students[i].name);  // To read a word
        printf("Enter Grade: ");
        scanf("%s", students[i].grade);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Address: ");
        scanf(" %s", students[i].address);  // To read a word
        printf("\n");
    }

    // Displaying student details
    printf("\nStudent Details:\n");
    printf("Name\t\tGrade\tAge\tAddress\n");
    for (i = 0; i < 10; i++) {
        printf("%s\t%s\t%d\t%s\n", students[i].name, students[i].grade, students[i].age, students[i].address);
    }
    return 0;
}
