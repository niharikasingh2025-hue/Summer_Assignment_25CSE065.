//ques 21 Write a program to Convert Decimal to Binary.
#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
//ques 22 Write a program to Convert Binary to Decimal.
#include <stdio.h>

int main()
{
    int binary, rem, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}


//ques 23 Write a program to Count Set Bits in a Number.
#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}

//ques 24 Write a program to Find xⁿ without using pow().
#include <stdio.h>

int main()
{
    int x, n, result = 1, i;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}
