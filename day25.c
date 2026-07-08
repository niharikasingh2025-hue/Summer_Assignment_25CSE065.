//ques 97
#include <stdio.h>

int main() {
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter sorted elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2], c[n1 + n2];
    printf("Enter sorted elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("Merged Sorted Array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}

//ques 98
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++) {
        for(j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}


//ques 98
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++) {
        for(j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}

//ques 99
#include <stdio.h>
#include <string.h>

int main() {
    char name[5][50], temp[50];
    int i, j;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++)
        scanf("%s", name[i]);

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", name[i]);

    return 0;
}
//ques 100
#include <stdio.h>
#include <string.h>

int main() {
    char word[5][50], temp[50];
    int i, j;

    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
        scanf("%s", word[i]);

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Words Sorted by Length:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", word[i]);

    return 0;
}