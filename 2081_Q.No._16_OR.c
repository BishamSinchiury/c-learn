/*
2081 Q.No. 16 OR
Discuss the concept of binary file handling in C programming and explain how putw() and getw() functions facilitate binary input/output operations. Give examples.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int i, num;

    // Write even numbers to the file
    fp = fopen("numbers.dat", "wb"); // Open file in binary write mode
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            putw(i, fp); // Write even number to file
        }
    }
    fclose(fp);       
    
    // Read the numbers from the file
    fp = fopen("numbers.dat", "rb"); // Open file in binary read mode
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }
    
    printf("Even numbers in the file:\n");
    while ((num = getw(fp)) != EOF) { // Read until end of file
        printf("%d ", num); // Display the numbers
    }
    fclose(fp);

    return 0;
}
