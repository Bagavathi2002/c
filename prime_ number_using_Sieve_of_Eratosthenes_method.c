#include <stdio.h>

int main() {
   
    int n;

    printf("Enter the value of 'n' : ");
    
   
    scanf("%d", &n);
   
    if (n <= 0) {
        printf("Please enter a positive number which is > 1\n");
        return 1;
    }

   
    if (n <= 1) {
        printf("Please enter a positive number which is > 1\n");
        return 1;
    }

   
    int prime[n + 1];

    
    for (int i = 0; i <= n; i++) {
        prime[i] = 1;
    }

    
    for (int p = 2; p * p <= n; p++) {
      
        if (prime[p] == 1) {
          
            for (int i = p * p; i <= n; i += p) {
                prime[i] = 0;
            }
        }
    }

    
    printf("The primes less than or equal to %d are: ", n);
    int first = 1;  
    for (int p = 2; p <= n; p++) {
        if (prime[p] == 1) {
            if (!first) {
                printf(", ");
            }
            printf("%d", p);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
