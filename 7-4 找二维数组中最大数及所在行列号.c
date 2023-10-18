#include "stdio.h"
int main() {
    int m;
    scanf("%d", &m);
    int arl[m][m];
    int mark[m][m];
    if (2 <= m && m <= 20) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < m; ++j) {
                scanf("%d", &arl[i][j]);
                mark[i][j] = arl[i][j];
            }
        }
    }
    int temp;
    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < m; ++k) {
            for (int j = 0; j < m-1; ++j) {
                if (mark[i][j] < mark[i][j + 1]) {
                    temp = mark[i][j + 1];
                    mark[i][j + 1] = mark[i][j];
                    mark[i][j] = temp;
                }

            }
        }

        }
    int max=mark[0][0];
    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < m; ++k) {
            if (max<mark[k][0]) {
                max=mark[k][0];
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if(arl[i][j]==max){
                printf("max=%d,i=%d,j=%d",max,i,j);
            }
        }
    }

}