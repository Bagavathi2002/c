#include <stdio.h>

int main() {
    int N;
    int a = 0, b = 1;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Invalid input\n");
        return 1;
    }
    if (N >= 0) {
        printf("%d ", a);
    }
    if (N >= 1) {
        printf("%d ", b);
    }
    int c = a + b;
    while (c <= N) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
