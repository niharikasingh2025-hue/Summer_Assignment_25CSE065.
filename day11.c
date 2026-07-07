//ques 25 
#include <stdio.h>

// Function definition
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10, num2 = 20;
    int sum = findSum(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}

//ques 42
#include <stdio.h>

// Function definition
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 15, num2 = 25;
    int max = findMax(num1, num2);
    printf("Maximum: %d\n", max);
    return 0;
}

//ques 43
#include <stdio.h>

// Function returns 1 if prime, 0 otherwise
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


//ques 44

int main() {
    int num = 17;
    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }
    return 0;
}
#include <stdio.h>

// Function definition (using recursion)
long long findFactorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * findFactorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d: %lld\n", num, findFactorial(num));
    return 0;
}
