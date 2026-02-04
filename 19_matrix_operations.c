/*
================================================================================
PROGRAM TITLE: Matrix Addition and Multiplication (3×3)
PURPOSE: To add and multiply two 3×3 matrices
NEB SYLLABUS TOPIC: 2D Arrays (Matrices)
GRADE: 12
================================================================================
*/

#include <stdio.h>  // For input/output functions

int main()
{
    int a[3][3], b[3][3], sum[3][3], product[3][3];
    int i, j, k;
    // a, b: input matrices
    // sum: to store addition result
    // product: to store multiplication result
    // i, j: row and column indices
    // k: for multiplication loop
    
    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input second matrix
    printf("\nEnter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix Addition: sum[i][j] = a[i][j] + b[i][j]
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Matrix Multiplication: product[i][j] = sum of (a[i][k] * b[k][j])
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            product[i][j] = 0;  // Initialize to 0
            for (k = 0; k < 3; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Display first matrix
    printf("\nFirst Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    // Display second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    // Display sum
    printf("\nSum of Matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    // Display product
    printf("\nProduct of Matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
================================================================================
CONCEPT NOTES
================================================================================

1. 2D ARRAY (MATRIX):
   - Array with rows and columns
   - Declaration: int matrix[rows][columns];
   - Example: int a[3][3]; (3 rows, 3 columns)
   - Total elements = rows × columns = 3 × 3 = 9

2. MATRIX INDEXING:
   - First index: row (0 to rows-1)
   - Second index: column (0 to columns-1)
   - Example: a[0][0] is element at row 0, column 0
   
   Matrix visualization:
   a[0][0]  a[0][1]  a[0][2]
   a[1][0]  a[1][1]  a[1][2]
   a[2][0]  a[2][1]  a[2][2]

3. MATRIX ADDITION:
   - Add corresponding elements
   - Formula: C[i][j] = A[i][j] + B[i][j]
   - Matrices must have same dimensions
   
   Example:
   [1 2]   [5 6]   [6  8 ]
   [3 4] + [7 8] = [10 12]

4. MATRIX MULTIPLICATION:
   - More complex than addition
   - Formula: C[i][j] = Σ(A[i][k] × B[k][j]) for k=0 to n-1
   - Number of columns in A must equal number of rows in B
   
   Example (2×2):
   [1 2]   [5 6]   [1×5+2×7  1×6+2×8]   [19 22]
   [3 4] × [7 8] = [3×5+4×7  3×6+4×8] = [43 50]

5. MULTIPLICATION STEP-BY-STEP (for 3×3):
   
   To find product[0][0]:
   = a[0][0]×b[0][0] + a[0][1]×b[1][0] + a[0][2]×b[2][0]
   
   To find product[0][1]:
   = a[0][0]×b[0][1] + a[0][1]×b[1][1] + a[0][2]×b[2][1]
   
   And so on for all 9 elements...

6. NESTED LOOPS:
   - Outer loop: iterates through rows (i)
   - Inner loop: iterates through columns (j)
   - For multiplication: third loop for k
   
   Pattern:
   for (i = 0; i < rows; i++)
       for (j = 0; j < cols; j++)
           // Process element [i][j]

COMMON MISTAKES IN EXAMS:
1. Wrong array dimensions
2. Incorrect loop limits (using <= instead of <)
3. Multiplication formula wrong
4. Not initializing product[i][j] to 0
5. Confusing i, j, k indices
6. Wrong order in multiplication (a[i][k] × b[k][j])

================================================================================
EXAM NOTES
================================================================================

MARKS DISTRIBUTION (Total: 10-12 marks):
- Matrix declarations: 1 mark
- Input loops: 2 marks
- Addition logic: 2 marks
- Multiplication logic: 4-5 marks
- Display: 2 marks

HOW TO WRITE IN NEB BOARD EXAM:
1. Declare 2D arrays for matrices
2. Input first matrix using nested loops
3. Input second matrix
4. Addition: nested loops, add corresponding elements
5. Multiplication: triple nested loops
   - Initialize product[i][j] = 0
   - Sum of a[i][k] * b[k][j]
6. Display all matrices

EXPECTED OUTPUT FORMAT:
First Matrix:
1    2    3
4    5    6
7    8    9

Second Matrix:
1    0    0
0    1    0
0    0    1

Sum of Matrices:
2    2    3
4    6    6
7    8    10

Product of Matrices:
1    2    3
4    5    6
7    8    9

ALTERNATIVE (Using functions):
void addMatrix(int a[][3], int b[][3], int sum[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];
}

void multiplyMatrix(int a[][3], int b[][3], int prod[][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            prod[i][j] = 0;
            for (int k = 0; k < 3; k++)
                prod[i][j] += a[i][k] * b[k][j];
        }
}

EXAM TIP:
- Addition is simple: just add corresponding elements
- Multiplication is complex: remember the formula
- Always initialize product[i][j] = 0 before k loop
- Use \t for tab spacing in output
- Test with identity matrix for easy verification

MATRIX PROPERTIES:
- Addition is commutative: A + B = B + A
- Multiplication is NOT commutative: A × B ≠ B × A
- Identity matrix: diagonal 1s, rest 0s

PRACTICAL APPLICATIONS:
- Graphics transformations
- Scientific calculations
- Image processing
- Linear algebra

================================================================================
*/
