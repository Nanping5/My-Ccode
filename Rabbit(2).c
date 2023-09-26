#include "stdio.h"
int main() {
    int rabbit_numbers;
    scanf("%d", &rabbit_numbers);
    int rabbit[10000];
    rabbit[0] = 1;
    rabbit[1] = 1;
    int months = 2;
    while (rabbit[months - 1] < rabbit_numbers) {
        rabbit[months] = rabbit[months - 1] + rabbit[months - 2];
        months++;
    }
    if (rabbit_numbers == 1) {
        printf("1");
    }
    else {
    printf("%d", months);
}
}