//
// Created by 刘旭 on 2023/9/20.
//
#include<stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void f2i(float a){
     int fenzi=a*10000;
     int fenmu=10000;
    int k=gcd(fenzi,fenmu);
    fenzi=fenzi/k;
    fenmu=fenmu/k;
    printf("%d/%d",fenzi,fenmu);
}
int main() {
    int n;
    scanf("%d\n", &n);
    float arl[n], sum = 0, a, b;
    for (int i = 0; i < n; i++) {
        scanf("%f/%f", &a, &b);
        if(b!=0) {
            arl[i] = a / b;
            sum = sum + arl[i];
        }
        else{
            printf("ERROR");
            return 0;
        }
    }
    int integer = (int) sum;
    float decimal = sum - integer;
    if (integer == 0) {
        f2i(decimal);
    }
    else {
    printf("%d ", integer);
        f2i(decimal);
    }
}