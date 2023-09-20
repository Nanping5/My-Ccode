#include <stdio.h>

int main() {
    char c;
    int m, result;
    scanf("%d", &result);
    while (1) {
        scanf(" %c", &c);
        if (c == '=') {
            break;
        }
        scanf("%d", &m);
        switch (c) {
            case '+':
                result += m;
                break;
            case '-':
                result -= m;
                break;
            case '*':
                result *= m;
                break;
            case '/':
                if (m == 0) {
                    printf("ERROR\n");
                    return 0;
                } else {
                    result /= m;
                }
                break;
            default:
                printf("ERROR\n");
                return 0;
        }
    }
    printf("%d\n", result);
    return 0;
}
