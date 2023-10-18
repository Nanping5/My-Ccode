#include "stdio.h"
int main(){
    int n;
    int arl[100][100]={0};
    scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
       arl[i][0]=1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <n ; ++j) {
            arl[i][j]=arl[i-1][j-1]+arl[i-1][j];
        }
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <=i; ++j) {
            printf("%4d",arl[i][j]);
        }
        printf("\n");
    }
}