#include <stdio.h>
int main(){
    int M,N,x,y,sum=0,count=0;
    scanf("%d %d",&M,&N);
    for(x=M;x<=N;x++)
    {
        for(y=2;y<x;y++)
        {
            if (x % y == 0)
            {
                break;
            }
        }
            if(x==y)
            {
                sum+=x;
                count++;
            }
        }
    printf("%d %d",count,sum);
    }

