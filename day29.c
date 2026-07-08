//ques 113
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}


//ques 114
#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nMenu\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }

            printf("Largest Element = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}


//ques 115
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nMenu\n");
    printf("1. Find Length\n");
    printf("2. Convert to Uppercase\n");
    printf("3. Convert to Lowercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
            printf("Uppercase: ");
            for(int i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("%s", str);
            break;

        case 3:
            printf("Lowercase: ");
            for(int i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
            }
            printf("%s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}


//ques 116
#include <stdio.h>

int main()
{
    int productId, quantity;
    char productName[50];
    float price, total;

    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Product Name: ");
    scanf("%s", productName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Unit: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\n----- Inventory Details -----\n");
    printf("Product ID   : %d\n", productId);
    printf("Product Name : %s\n", productName);
    printf("Quantity     : %d\n", quantity);
    printf("Price        : %.2f\n", price);
    printf("Total Value  : %.2f\n", total);

    return 0;
}