#include <stdio.h>
#include <string.h>


void leftRotateString(char* str, int len) {
    char temp = str[0];
    for (int i = 0; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len - 1] = temp;
}

int main() {
    char str[101];
    int N;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &N);

    int len = strlen(str);


    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    N = N % len;


    for (int i = 0; i < N; i++) {
        leftRotateString(str, len);
    }

    printf("%s\n", str);

    return 0;
}
