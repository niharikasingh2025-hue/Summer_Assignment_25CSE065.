//ques 105
#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks;

    printf("Enter Student Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Student Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}
//ques 106
#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID     : %d\n", id);
    printf("Employee Name   : %s\n", name);
    printf("Employee Salary : %.2f\n", salary);

    return 0;
}


//ques 107
#include <stdio.h>

int main()
{
    char name[50];
    float basic, hra, da, gross;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}


//ques 108
#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n----- Marksheet -----\n");
    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", roll);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A\n");
    else if (percentage >= 75)
        printf("Grade : B\n");
    else if (percentage >= 60)
        printf("Grade : C\n");
    else if (percentage >= 40)
        printf("Grade : D\n");
    else
        printf("Grade : Fail\n");

    return 0;
}