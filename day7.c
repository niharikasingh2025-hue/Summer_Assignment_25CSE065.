//ques 25
#include <stdio.h>

// Recursive function to find factorial of a number
unsigned long long factorial(int n) {
    // Base cases: 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }
    return 0;
}

//ques 26
#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}

//ques 27
#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    // Base case
    if (num == 0) {
        return 0;
    }
    // Recursive case: last digit + sum of remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make the number positive if it is negative
    int temp = (num < 0) ? -num : num;

    result = sumOfDigits(temp);
    printf("Sum of digits of %d = %d\n", num, result);
    return 0;
}

//ques 28
#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int reversed) {
    // Base case
    if (num == 0) {
        return reversed;
    }
    // Update reversed and pass the remaining quotient
    return reverseNumber(num / 10, reversed * 10 + (num % 10));
}

int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle 0 explicitly
    if (num == 0) {
        printf("Reversed number = 0\n");
    } else {
        // Pass initial reverse accumulation as 0
        result = reverseNumber(num, 0);
        printf("Reversed number = %d\n", result);
    }
    return 0;
}
