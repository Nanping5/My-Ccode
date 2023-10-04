#include "stdio.h"
int main () {
    int N, X = 100;
    scanf("%d", &N);
    if (3 <= N && N <= 7) {
        switch (N) {

            case 3:
                for (int i = 100; i < 999; i++) {
                    int ai = i % 10;
                    int bi = i / 10 % 10;
                    int ci = i / 100;
                    if (ai * ai * ai + bi * bi * bi + ci * ci * ci == i) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 4:
                for (int i = 1000; i < 9999; i++) {
                    int ai = i % 10;
                    int bi = i / 10 % 10;
                    int ci = i / 100 % 10;
                    int di = i / 1000;
                    if (ai * ai * ai * ai + bi * bi * bi * bi + ci * ci * ci * ci + di * di * di * di == i) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 5:
                for (int i = 10000; i < 99999; i++) {
                    int ai = i % 10;
                    int bi = i / 10 % 10;
                    int ci = i / 100 % 10;
                    int di = i / 1000 % 10;
                    int ei = i / 10000;
                    if (ai * ai * ai * ai * ai + bi * bi * bi * bi * bi + ci * ci * ci * ci * ci +
                        di * di * di * di * di + ei * ei * ei * ei * ei == i) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 6:
                for (int i = 100000; i < 999999; i++) {
                    int ai = i % 10;
                    int bi = i / 10 % 10;
                    int ci = i / 100 % 10;
                    int di = i / 1000 % 10;
                    int ei = i / 10000 % 10;
                    int fi = i / 100000;
                    if (ai * ai * ai * ai * ai * ai + bi * bi * bi * bi * bi * bi + ci * ci * ci * ci * ci * ci +
                        di * di * di * di * di * di + ei * ei * ei * ei * ei * ei + fi * fi * fi * fi * fi * fi == i) {
                        printf("%d\n", i);
                    }
                }
                break;
            case 7:
                for (int i = 1000000; i < 9999999; i++) {
                    int ai = i % 10;
                    int bi = i / 10 % 10;
                    int ci = i / 100 % 10;
                    int di = i / 1000 % 10;
                    int ei = i / 10000 % 10;
                    int fi = i / 100000 % 10;
                    int gi = i / 1000000;
                    if (ai * ai * ai * ai * ai * ai * ai + bi * bi * bi * bi * bi * bi * bi +
                        ci * ci * ci * ci * ci * ci * ci + di * di * di * di * di * di * di +
                        ei * ei * ei * ei * ei * ei * ei + fi * fi * fi * fi * fi * fi * fi +
                        gi * gi * gi * gi * gi * gi * gi == i) {
                        printf("%d\n", i);
                    }

                }
                break;
        }
    }
}