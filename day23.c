//ques 89
#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        flag = 0;

        for (j = 0; str[j] != '\0' && str[j] != '\n'; j++) {
            if (i != j && str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if (!flag) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}


//ques 90
#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j]) {
                printf("First repeating character = %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");

    return 0;
}

//ques 91
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2) {
        printf("Not Anagram");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        flag = 0;
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '*';
                flag = 1;
                break;
            }
        }

        if (!flag) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Strings are Anagram");

    return 0;
}


//ques 92
#include <stdio.h>

int main() {
    char str[100], maxChar;
    int i, j, count, maxCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count = 1;

        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", maxCount);

    return 0;
}