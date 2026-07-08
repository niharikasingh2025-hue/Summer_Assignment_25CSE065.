//ques 101
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100:\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}

//ques 102
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.");
    else
        printf("You are not eligible to vote.");

    return 0;
}


//ques 103
#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful.\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 4);

    return 0;
}
//ques 104
#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("----- Quiz Application -----\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n4. 14\n");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}