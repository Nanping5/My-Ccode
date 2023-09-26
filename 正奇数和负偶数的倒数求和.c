#include "stdio.h"
float plus(int m)
{
    float sum=0;
    for(int i=1;i<m+1;i=i+2)
    {
        sum=sum+1.0/i;
    }
    return sum;
}
float sub(int m)
{
    float sum=0;
    for(int i=2;i<m+1;i=i+2)
    {
        sum=sum-1.0/i;
    }
    return sum;
}
int main()
{
    int m;
    float result;
    scanf("%d",&m);
    if(m>0) {
        if (m == 1) {
            printf("1.0000");
        }
        else {
            result = plus(m) + sub(m);
            printf("%.4f", result);
        }
    }
}