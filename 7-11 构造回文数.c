#include <stdio.h>
#include <string.h>

// 函数用于将字符串反转
void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// 函数用于判断一个字符串是否为回文数
int isPalindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[1001];

    // 读入正整数
    scanf("%s", str);

    int count = 0;

    // 不断进行操作，直到得到回文数或者操作次数超过10次
    while (!isPalindrome(str)) {
        // 反转字符串
        char rev[1001];
        strcpy(rev, str);
        reverseString(rev);

        // 计算和
        char sum[1002];
        int carry = 0;
        int len = strlen(str);
        for (int i = len - 1; i >= 0; i--) {
            int digit = (str[i] - '0') + (rev[i] - '0') + carry;
            sum[i + 1] = digit % 10 + '0';
            carry = digit / 10;
        }
        if (carry > 0) {
            sum[0] = carry + '0';
            len++;
        } else {
            sum[0] = '0';
        }

        // 输出计算过程
        printf("%s + %s = %s\n", str, rev, sum);

        // 更新字符串
        strcpy(str, sum);

        count++;

        // 如果操作次数超过10次，则退出循环
        if (count >= 10) {
            printf("Not found in 10 iterations.\n");
            return 0;
        }
    }

    // 输出回文数
    printf("%s is a palindromic number.\n", str);

    return 0;
}
