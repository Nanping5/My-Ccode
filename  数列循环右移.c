#include "stdio.h"
int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    int A[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&A[i]);
    }
    int temp;
    for (int i = 0; i < m; i++) {
        temp = A[n - 1];
        for (int j = n - 1; j > 0; j--) {
            A[j] = A[j - 1];
        }
        A[0] = temp;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",A[i]);
    }

}