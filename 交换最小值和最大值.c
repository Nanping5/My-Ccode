#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nums[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }


    int min = 0, max = 0;
    for (int i = 1; i < N; i++) {
        if (nums[i] < nums[min]) {
            min = i;
        }
    }


    int temp = nums[0];
    nums[0] = nums[min];
    nums[min] = temp;

    for (int i = 1; i < N; i++) {
        if (nums[i] > nums[max]) {
            max = i;
        }
    }

    temp = nums[N - 1];
    nums[N - 1] = nums[max];
    nums[max] = temp;


    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);

    }

    return 0;
}
