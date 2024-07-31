#include <stdio.h>

int main() {
    int n;
    char arr[50];
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter string: ");
    for(int i = 0; i < n; i++) {
        scanf("%c", &arr[i]);
    }
    
    printf("You entered: ");
    for(int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    
    return 0;
}
