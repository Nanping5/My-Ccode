#include "stdio.h"
int main (){
    int M,N,X;
    scanf("%d %d",&M,&N);
    if(100<=M&&M<=N&&N<+999){

    for(X=M;X<=N;X++)
    {
        int i = X % 10;
        int o = X / 10 % 10;
        int p = X / 100;
        if (X == i * i * i + o * o * o + p * p * p)
        {
            printf("%d\n", X);
        }
    }

    }
    else{
        printf("Invalid Value.");
    }

}
