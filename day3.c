//ques 9
#include <stdio.h>

int main() {
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}


//ques 10-
#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        flag = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d ", i);
    }

    return 0;
}


//ques 11-find gcd of two numbers
#include <stdio.h>

int main() {
    int a, b, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);

    return 0;
}


//ques 12-lcm of two numbers
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}