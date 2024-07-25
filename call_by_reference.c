#include <stdio.h>

int modify(int *ptr1, int *ptr2) {
    int c = *ptr1 + *ptr2;
    return c;
}

int main() {
    int ptr1 = 10;
    int ptr2 = 10;
    int c = modify(&ptr1, &ptr2);
    printf("%d\n", c);
    return 0;
}
