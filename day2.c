//ques 5-sum of digits of a number
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

//ques 6- reverse of a number
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}


//ques7- product of digits of a number

#include <stdio.h>

int main() {
    int num, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        product = product * (num % 10);
        num = num / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}


//ques 8-palindrome number
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
