#include <stdio.h>

int main() {
    int high, line;
    char M;
    scanf("%c %d", &M, &high);
    line = (high + 1) / 2;

    for (int row = 1; row < line; row++) {
        for (int j = line - row; j > 0; j--) {
            printf(" ");
        }

        printf("%c", M);

        for (int i = 0; i < 2 * row - 3; i++) {
            printf(" ");
        }

        if (row > 1) {
            printf("%c", M);
        }
        printf("\n");
        M++;
    }

    for (int row = line; row>=1; row--) {
        for (int j = line - row; j > 0; j--) {
            printf(" ");
        }

        printf("%c", M);

        for (int i = 0; i < 2 * row - 3; i++) {
            printf(" ");
        }

        if (row >1) {
            printf("%c", M);
        }
        printf("\n");
        M--;
    }

}
