//ques 37
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("*");
        printf("\n");
    }
    return 0;
}

//ques 38
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("*");
        printf("\n");
    }
    return 0;
}

//ques 39
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d", j);
        for (int j = i - 1; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
//ques 40
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("%c", 'A' + j);
        for (int j = i - 2; j >= 0; j--) printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}
