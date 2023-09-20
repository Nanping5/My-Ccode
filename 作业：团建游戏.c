//
// Created by 刘旭 on 2023/9/19.
//
#include "stdio.h"
int isSeven(int k){
    if((k%7==0&k>=7)||(k%10==7)){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n, m, currentnum = 1;
    scanf("%d %d", &n, &m);
    /*int t = 1, l = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (currentnum < 7) {
                printf("%d ", currentnum);
            } else if (isSeven(currentnum)) {
                printf("* ");
            } else {
                printf("%d ", currentnum);
            }

            currentnum++;
        }
        printf("\n");
    }
}
*/
    int count = 0;

    while (currentnum <= m) {
        if (isSeven(currentnum)) {
            printf("* ");
        } else {
            printf("%d ", currentnum);
        }

        count++;

        if (count == n) {
            printf("\n");
            count = 0;
        }

        currentnum++;
    }


}