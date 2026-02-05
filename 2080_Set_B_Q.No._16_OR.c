/*
2080 GIE Set B Q.No. 16 OR
Describe file handling modes on C. Write a C program to create and write data into a file.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;               // File pointer
    char filename[50];      // File name
    char data[200];         // Data to write into the file
    
    // Ask user for the file name
    printf("Enter the name of the file to create: ");
    scanf("%s", filename);
    
    // Open the file in write mode
    fp = fopen(filename, "w");
    if (fp == NULL) {       // Check if the file is created successfully
        printf("Error! Unable to create the file.\n");
        exit(1);            // Exit the program
    }
    
    // Ask user for the data to write
    printf("Enter data to write into the file (end with a newline):\n");
    getchar();              // Clear the input buffer
    fgets(data, sizeof(data), stdin); // Read a line of text
    
    // Write the data into the file
    fprintf(fp, "%s", data);
    
    // Close the file
    fclose(fp);
    printf("Data written successfully to the file \"%s\".\n", filename);
    
    return 0;               // Exit successfully
}
