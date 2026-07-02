//ques 17
/*#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}



// ques 18
#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}


//ques 19
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    return 0;
}*/

//ques 20
#include <stdio.h>

int main() {
    int num, i, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        largest = 2;
        num /= 2;
    }

    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest = i;
            num /= i;
        }
    }

    if (num > 2)
        largest = num;

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
