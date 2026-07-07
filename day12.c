//ques 45
#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return (n == rev);
}

int main() {
    int n = 121;
    if (isPalindrome(n)) printf("%d is a palindrome.\n", n);
    return 0;
}

//ques 46
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (n == sum);
}

int main() {
    int n = 153;
    if (isArmstrong(n)) printf("%d is an Armstrong number.\n", n);
    return 0;
}


//ques 47
#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    printFibonacci(10);
    return 0;
}



//ques 48
#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return (sum == n && n > 0);
}

int main() {
    int n = 28;
    if (isPerfect(n)) printf("%d is a perfect number.\n", n);
    return 0;
}
