//ques 33
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//ques 34
/* #include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

//ques 35
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    return 0;
}

//ques 36
#include <stdio.h>

int main() {
    int side = 5;
    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            if (i == 1 || i == side || j == 1 || j == side)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
