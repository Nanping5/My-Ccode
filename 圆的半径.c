#include <stdio.h>
#include <stdlib.h> // 添加头文件以使用sscanf函数

int main() {
    char *fruits[] = {"apple", "pear", "orange", "grape"};
    float prices[] = {3.00, 2.50, 4.10, 10.20};
    char input_str[100];
    int count = 0;

    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    printf("请输入连续的数字（以空格分隔），查询单价：");
    scanf("%[^\n]", input_str); // 读取整行，包括空格

    int input;
    char *token = strtok(input_str, " ");
    while (token != NULL) {
        sscanf(token, "%d", &input);

        if (input == 0 || count >= 5) {
            break;
        } else if (input >= 1 && input <= 4) {
            printf("price = %.2f\n", prices[input - 1]);
            count++;
        } else {
            printf("price = 0.00\n");
            count++;
        }

        token = strtok(NULL, " ");
    }

    return 0;
}
