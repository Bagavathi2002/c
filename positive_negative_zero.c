#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Number %d is %s.\n", number, (number > 0) ? "positive" : (number < 0) ? "negative" : "zero");
    
    return 0;
}
