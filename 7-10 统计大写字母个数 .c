#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int count[26] = {0};

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}
