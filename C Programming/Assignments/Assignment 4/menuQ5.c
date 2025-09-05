//Write a menu driven program to take a number for user and perform operations as follows.
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.

#include <stdio.h>
void main() {
    int choice, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive, negative or zero\n");
    printf("5. Reverse the number\n");
    printf("6. Find sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }
    else if (choice == 2) {
        int i, flag = 1;
        if (num <= 1) {
            printf("%d is not Prime\n", num);
        } else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                printf("%d is Prime\n", num);
            else
                printf("%d is not Prime\n", num);
        }
    }
    else if (choice == 3) {
        int temp = num, rev = 0, rem;
        if (num < 0) temp = -num; // handle negative numbers
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == (num < 0 ? -num : num))
            printf("%d is Palindrome\n", num);
        else
            printf("%d is not Palindrome\n", num);
    }
    else if (choice == 4) {
        if (num > 0)
            printf("%d is Positive\n", num);
        else if (num < 0)
            printf("%d is Negative\n", num);
        else
            printf("Number is Zero\n");
    }
    else if (choice == 5) {
        int temp = num, rev = 0, rem;
        if (temp < 0) temp = -temp; // handle negative
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (num < 0)
            rev = -rev; // keep sign
        printf("Reverse of %d is %d\n", num, rev);
    }
    else if (choice == 6) {
        int temp = num, sum = 0, rem;
        if (temp < 0) temp = -temp; // handle negative
        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits of %d is %d\n", num, sum);
    }
    else {
        printf("Invalid Choice!\n");
    }
}

