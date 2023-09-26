#include "stdio.h"
int main() {
    int m;
    scanf("%d",&m);
    int t=0;
    for(int i=1;i<m;i++)
    {
        if(m%i==0)
        {
            t=t+i;
        }
    }
    if(m==t){
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}