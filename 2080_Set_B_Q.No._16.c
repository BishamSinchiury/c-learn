/*
2080 GIE Set B Q.No. 16
Write a program to store five employees' records (EID, Name, post and department) and display them using structure.
*/

#include <stdio.h>

// Define a structure for Employee
struct Employee {
    int EID;                // Employee ID
    char name[50];          // Employee Name
    char post[30];          // Employee Post
    char department[30];    // Employee Department
};

int main() {
    struct Employee employees[5]; // Array to store 5 employees
    int i;
    
    // Input records for 5 employees
    printf("Enter details for 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].EID);
        getchar();      // Clear newline character from input buffer
        
        printf("Enter Name: ");
        // gets(employees[i].name); -> replaced with fgets
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        // fgets keeps the newline, strictly speaking we might want to remove it for clean output, 
        // but for exam code usually this is ignored. I'll strip it for better quality if easy.
        { int j = 0; while(employees[i].name[j] != '\0') { if(employees[i].name[j] == '\n') employees[i].name[j] = '\0'; j++; } }
        
        printf("Enter Post: ");
        // gets(employees[i].post);
        fgets(employees[i].post, sizeof(employees[i].post), stdin);
        { int j = 0; while(employees[i].post[j] != '\0') { if(employees[i].post[j] == '\n') employees[i].post[j] = '\0'; j++; } }

        printf("Enter Department: ");
        // gets(employees[i].department);
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        { int j = 0; while(employees[i].department[j] != '\0') { if(employees[i].department[j] == '\n') employees[i].department[j] = '\0'; j++; } }
    }
    
    // Display employee records
    printf("\nEmployee Records:\n");
    printf("EID\tName\t\tPost\t\tDepartment\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%-15s%-15s%-15s\n", employees[i].EID, employees[i].name, employees[i].post, employees[i].department);
    }
    return 0;
}
