#include <stdio.h>

int main() {
    // Declare the variables
    int a, b, t;
    float median1, median2;
    
    // Get input from the user
    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &a);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &b);
    // Declare the array and get array element as input from user
    int ar1[a];
    int ar2[b];

    printf("Enter the elements one by one for Array A: ");
    for (int i = 0; i < a; i++) {
        scanf("%d", &ar1[i]);
    }
    printf("Enter the elements one by one for Array B: ");
    for (int i = 0; i < b; i++) {
        scanf("%d", &ar2[i]);
    }

    // Sort array A in ascending order
    for (int i = 0; i < a-1; i++) { 
        for (int j = 0; j < a-1-i; j++) {
            if (ar1[j] > ar1[j+1]) {
                t = ar1[j];
                ar1[j] = ar1[j+1];
                ar1[j+1] = t;
            }
        }
    }

    // Calculate median for Array A
    if (a % 2 != 0) {
        median1 = ar1[a/2];
    } else {
        median1 = (ar1[a/2] + ar1[(a/2)-1]) / 2.0;
    }
    printf("Median of array1: %g\n", median1);

    // Sort array B in ascending order
    for (int i = 0; i < b-1; i++) { 
        for (int j = 0; j < b-1-i; j++) {
            if (ar2[j] > ar2[j+1]) {
                t = ar2[j];
                ar2[j] = ar2[j+1];
                ar2[j+1] = t;
            }
        }
    }

    // Calculate median for Array B
    if (b % 2 != 0) {
        median2 = ar2[b/2];
    } else {
        median2 = (ar2[b/2] + ar2[(b/2)-1]) / 2.0;
    }
    printf("Median of array2: %g\n", median2);

    // Calculate the average of both medians
    float f = (median1 + median2) / 2;
    printf("Median of both arrays: %g\n", f);

    return 0;
}

    