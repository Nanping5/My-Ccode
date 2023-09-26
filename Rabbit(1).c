#include "stdio.h"
int FBI(int n)
{
    long long a=0,b=1; long long result;
    if(n == 0||n== 1)
        return 1;
    else{
        for( int i=2;i<=n;i++) {
            result=a+b;
            a=b;
            b=result;
        }
        return result;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int rabbit[10000];
    for(int months=0;months<n;months++) {
        if (months == 0) {
            rabbit[0] = 1;
        }
        else {
        rabbit[months]= FBI(months);
        }
        printf("%d",rabbit[months]);
    }


}