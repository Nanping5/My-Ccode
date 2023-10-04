#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t = 0;

    for (int fives = 1; fives <= 30; fives++) {
        for (int twos = 1; twos <= 75; twos++) {
            for (int ones = 1; ones <= 150; ones++) {
                if (5 * fives + 2 * twos + ones ==150&&fives+ twos+ones==100) {

                    printf("%d %d %d\n", fives, twos, ones);
                    t++;
                    if (t == n) {
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
