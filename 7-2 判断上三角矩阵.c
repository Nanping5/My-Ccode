#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; ++t) {
        int n;
        int sa=1;
        int arl[100][100];
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf("%d", &arl[i][j]);
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i>j) {
                    if (arl[i][j] != 0) {
                        sa=0;
                    }

                }
            }

        }


        if (sa == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    }

