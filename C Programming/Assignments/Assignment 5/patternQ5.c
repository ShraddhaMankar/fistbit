//Print an inverted pyramid pattern
//Input: n = 5
//Output:
//
//* * * * *
// * * * *
//  * * *
//   * *
//    *

#include <stdio.h>
void main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
