#include "stdio.h"
int main() {
    int N;
    scanf("%d",&N);
    int num[N];
    for (int i = 0; i < N; i++) {
        scanf("%d",&num[i]);
    }
    int temp,t;
    int count[10000] = {0};
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {

            if (num[i] == num[k]) {
                count[k]++;
            }
        }
        for (int i = 0; i < N; ++i) {


            if (count[i] < count[i + 1]) {
                temp = count[i];
                count[i] = count[i + 1];
                count[i + 1] = temp;

                t = num[i];
                num[i] = num[i + 1];
                num[i + 1] = t;
            }

        }
    }
    printf("%d %d",num[0],count[0]);
}