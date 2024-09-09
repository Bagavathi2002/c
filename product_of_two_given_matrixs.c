#include <stdio.h>

// Function to multiply two matrices
void matrix_mul(int *mat_a, int rows_a, int cols_a, int *mat_b, int rows_b, int cols_b, int *result) {
    if (cols_a != rows_b) {
        printf(" Matrix multiplication is not possible\n");
        return ;
    }
    // Multiply matrices mat_a and mat_b, store result in result matrix
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            result[i * cols_b + j] = 0;
            for (int k = 0; k < cols_a; k++) {
                result[i * cols_b + j] += mat_a[i * cols_a + k] * mat_b[k * cols_b + j];
            }
        }
    }
   // Print the result matrix
    printf("Product of two matrix :\n");
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            printf("%d ", result[i*cols_b+j]);
        }
        printf("\n");
}
}

int main() {
    // Declare the variables
    int rows_a, cols_a, rows_b, cols_b;
    
    // Get input number of rows and columns for Matrix A
    scanf("%d %d", &rows_a, &cols_a);

    int mat_a[rows_a][cols_a]; 
    // Get input values for Matrix A
   
      for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            scanf("%d", &mat_a[i][j]);
        }
    }

    // Get input number of rows and columns for Matrix B
    scanf("%d %d", &rows_b, &cols_b);

    int mat_b[rows_b][cols_b]; 
    // Get input values for Matrix B
   
    for (int i = 0; i < rows_b; i++) {
        for (int j = 0; j < cols_b; j++) {
            scanf("%d", &mat_b[i][j]);
        }
    }

    int result[rows_a][cols_b];

    // Perform matrix multiplication
    matrix_mul((int *)mat_a, rows_a, cols_a, (int *)mat_b, rows_b, cols_b, (int *)result);

    return 0;
}
