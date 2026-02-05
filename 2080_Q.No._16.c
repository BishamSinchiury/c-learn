/*
2080 Q.No. 16
Write the advantage of a pointer. Write a C- program to enter the radius of a football and find the area of football by using a user defined function.
*/

#include <stdio.h>
#define PI 3.14         // Define a constant for Pi

// Function to calculate the area of a football (Surface Area of Sphere = 4 * PI * r^2)
float calculateArea(float radius) {
    return 4 * PI * radius * radius;  // Area formula for a sphere
}

int main() {
    float radius, area;     // Declare variables
    
    // Prompt user to enter the radius
    printf("Enter the radius of the football: ");
    scanf("%f", &radius);   // Read the radius from user input
    
    // Call the function to calculate the area
    area = calculateArea(radius);
    
    // Display the result
    printf("The surface area of the football is: %.2f\n", area);

    return 0;               // End of the program
}
