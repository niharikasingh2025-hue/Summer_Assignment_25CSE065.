//ques 65
#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2], merge[n1 + n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    for(i = 0; i < n1; i++)
        merge[i] = arr1[i];

    for(i = 0; i < n2; i++)
        merge[n1 + i] = arr2[i];

    printf("Merged Array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merge[i]);

    return 0;
}

//ques 66
#include <stdio.h>

int main() {
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Union of arrays:\n");

    for(i = 0; i < n1; i++)
        printf("%d ", arr1[i]);

    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", arr2[i]);
    }

    return 0;
}


//ques 67
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Intersection of arrays:\n");

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}

//ques 68
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements are:\n");

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}