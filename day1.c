// ques 1
/*#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}


//ques 2
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}


//ques 3
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}*/




//ques 4
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}