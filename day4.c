//ques 13

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}


//ques 14
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Nth Fibonacci term = %d", a);
    else if (n == 2)
        printf("Nth Fibonacci term = %d", b);
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}


//ques 15
#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}


//ques 16
#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}