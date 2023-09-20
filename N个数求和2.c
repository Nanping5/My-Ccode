#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void simplify(long long *numn, long long *numd) {
    long long commonDivisor = gcd(*numn, *numd);
    *numn /= commonDivisor;
    *numd /= commonDivisor;
}

int main() {
    int n;
    scanf("%d", &n);

    long long sumn = 0, sumd = 1;

    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld/%lld", &a, &b);


        sumn = a * sumd+sumn * b ;
        sumd=sumd*b;


        simplify(&sumn, &sumd);
    }

    long long integerPart = sumn / sumd;
    sumn %= sumd;

    if (integerPart != 0) {
        printf("%lld", integerPart);
        if (sumn != 0) {
            printf(" %lld/%lld", sumn, sumd);
        }
    } else {
        if (sumn != 0) {
            printf("%lld/%lld", sumn, sumd);
        } else {
            printf("0");
        }
    }

    printf("\n");

    return 0;
}
