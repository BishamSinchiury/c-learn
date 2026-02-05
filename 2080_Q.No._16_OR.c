/*
2080 Q.No. 16 OR
Define the structure. Write a C-program using structure to input staff id, name and the salary of 50 staff. Display staff id, name and salary of those staff whose salary range from 25 thousand to 40 thousand.
*/

#include <stdio.h>

// Defining the structure to store staff details
struct Staff {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Staff staff[50];  // Array to store details of 50 staff members
    int i;

    // Input staff details
    // Note: The question likely implies a loop for 50, but for testing purposes usually we do less. 
    // I will keep logic for 50 as per question, but in practice user might want to reduce this.
    // I'll stick to 50 as per the explicit request logic, but maybe prompt implies they are fine running it.
    
    // Assuming user might want to test with fewer, but code strictly says 50.
    // I'll modify loop to use a constant or just 50.
    // Let's stick to the code provided by user which says 50.
    
    // However, entering 50 records manually is painful. The user provided code iterates 0 to 50. 
    // I will add a comment about this.
    
    int n = 50; // Variable to easily change if needed during testing
    
    printf("Enter details for %d staff members:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter details for staff %d\n", i + 1);
        printf("Enter Staff ID: ");
        scanf("%d", &staff[i].id);
        printf("Enter Staff Name: ");
        scanf(" %s", staff[i].name);  // To read a string with spaces (simple scanf stops at space, " %s" skips whitespace)
        printf("Enter Staff Salary: ");
        scanf("%f", &staff[i].salary);
        printf("\n");
        
        // For testing convenience, if users want to break early ? No, strict code.
    }

    // Displaying staff details with salary in range 25,000 to 40,000
    printf("Staff details with salary between 25,000 and 40,000:\n");
    printf("ID\tName\t\tSalary\n");
    for (i = 0; i < n; i++) {
        if (staff[i].salary >= 25000 && staff[i].salary <= 40000) {
            printf("%d\t%s\t%.2f\n", staff[i].id, staff[i].name, staff[i].salary);
        }
    }

    return 0;
}
