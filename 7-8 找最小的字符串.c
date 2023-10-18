//
// Created by Administrator on 2023/10/18.
//
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char smallest_string[80];
    char current_string[80];


    scanf("%d", &N);
    scanf("%s", smallest_string);
    for (int i = 1; i < N; i++) {
        scanf("%s", current_string);
        if (strcmp(current_string, smallest_string) < 0) {
            strcpy(smallest_string, current_string);
        }
    }

    printf("Min is: %s\n", smallest_string);

    return 0;
}
