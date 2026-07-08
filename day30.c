//ques 117
#include <stdio.h>

int main()
{
    int roll[5], marks[5], i;
    char name[5][50];

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }

    return 0;
}


//ques 118
#include <stdio.h>

int main()
{
    char book[3][50];
    char author[3][50];
    int i;

    printf("Enter details of 3 books:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d Name: ", i + 1);
        scanf("%s", book[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n----- Library Books -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook   : %s", book[i]);
        printf("\nAuthor : %s\n", author[i]);
    }

    return 0;
}

//ques 119
#include <stdio.h>

int main()
{
    int id[3];
    float salary[3];
    char name[3][50];
    int i;

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &id[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n----- Employee Details -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID     : %d", id[i]);
        printf("\nName   : %s", name[i]);
        printf("\nSalary : %.2f\n", salary[i]);
    }

    return 0;
}



//ques 120
#include <stdio.h>

void displayStudent(int roll[], char name[][50], int marks[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }
}

int main()
{
    int roll[5], marks[5], i;

    char name[5][50];

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    displayStudent(roll, name, marks, 5);

    return 0;
}