#include "stdio.h"
int main()
{
    int peachs=1;
    int day;
    int N;
    scanf("%d",&N);
    for(day=N;day>1;day--)
    {
        peachs=2*(peachs+1);
    }
    printf("%d",peachs);
}