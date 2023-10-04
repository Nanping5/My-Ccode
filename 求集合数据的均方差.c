#include <stdio.h>
#include <math.h>
int main()
{

    int n,i,a[10000];
    double avage,sum = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avage = sum/n;
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum += pow(a[i]-avage,2.0);
    }
    avage = sum/n;
    printf("%.5lf",sqrt(avage));
    return 0;
}

