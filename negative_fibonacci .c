#include <stdio.h>

int main() {
    
    int N;
    
    int a = 0, b = 1;


    printf("Enter a number: ");
    scanf("%d", &N);
    if (N == 0) {
        printf("0");
    }
    else if(N > 0) {
        printf("Invalid input");
    }
    else{

    printf("%d ", a);
    printf("%d ", b);
     int c = a - b;

        while (c >= N) {
            if (c >= N && (-c >=N)) {
                printf("%d ", c);
            }
            a = b;
            b = c;
            c = a - b;
        }
    }

    return 0;
}