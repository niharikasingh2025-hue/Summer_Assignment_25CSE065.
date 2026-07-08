//ques 109
#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];
    char author[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s\n", bookName);
    printf("Author Name : %s\n", author);

    return 0;
}


//ques 110
#include <stdio.h>

int main()
{
    int accountNo;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\n----- Bank Account Details -----\n");
    printf("Account Number : %d\n", accountNo);
    printf("Account Holder : %s\n", name);
    printf("Balance        : %.2f\n", balance);

    return 0;
}


//ques 111
#include <stdio.h>

int main()
{
    char name[50];
    char destination[50];
    int tickets;
    float fare, total;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Destination: ");
    scanf("%s", destination);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Fare per Ticket: ");
    scanf("%f", &fare);

    total = tickets * fare;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Destination    : %s\n", destination);
    printf("Tickets        : %d\n", tickets);
    printf("Total Fare     : %.2f\n", total);

    return 0;
}


//ques 112
#include <stdio.h>

int main()
{
    char name[50];
    char phone[15];
    char email[50];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email ID: ");
    scanf("%s", email);

    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %s\n", phone);
    printf("Email ID     : %s\n", email);

    return 0;
}