//Print strong numbers in the given range 1 to n.
#include <stdio.h>
void main() {
    int n, i, j, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);
    for(i = 2; i <= n; i++) {
        isPrime = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
}
