//
// Created by 刘旭 on 2023/9/16.
//
/*第三周作业
01
 #include <stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);
    if(grade>=95){
        printf("A");
    }
     else if(grade>=90&&grade<95){
        printf("A-");
    }
    else if(grade>=85&&grade<90){
        printf("B+");
    }
    else if(grade>=80&&grade<85){
        printf("B");
    }
    else if(grade>=75&&grade<80){
        printf("B-");
    }
    else if(grade>=70&&grade<75){
        printf("C+");
    }
    else if(grade>=60&&grade<70){
        printf("C");
    }
    else {
        printf("D");
    }

}*/
//02
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(1<=n&&n<=10){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        printf("n=%d无效",n);
    }

}*/
//03
/*#include "stdio.h"
int factorial(int i){
    if(i==0||i==1){
        return 1;}
        else{
            return i* factorial(i-1);
        }
    }

int main (){
    int n,m;
    float result=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        m=factorial(i);
         result=result+1.0/m;
    }
    printf("e=%.6f",(float)result+1);
}*/
//04

/*
 * #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 0;
    while (n > 0) {
        num = num * 10 + n % 10;
        n =n/ 10;
    }

    printf("%d\n",num);

    return 0;


}*/
/*05

 #include <stdio.h>

void printBinaryGroups(unsigned int n) {
    for (int i = 15; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);

        if (i % 4 == 0 && i != 0) {
            printf("-");
        }
    }
    printf("\n");
}

int main() {
    unsigned int n;
    scanf("%u", &n);
    printBinaryGroups(n);
    return 0;
}
*//*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[16] ={0};
    int i=0;
    if(n==-1){
        printf("1111-1111-1111-1111");}
    else if(n!=-1){
        while(n!=0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
        for(i=15;i>=0;i--){
            if((i==11)||(i==7)||(i==3)){
                printf("-");}
            printf("%d",a[i]);
        }
    }
    return 0;
}
*//*
 * 05#include<stdio.h>
int main(){
    int unsigned n;
    scanf("%u",&n);

    for (int i = 15; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        if (i == 12 || i == 8 || i == 4) {
            printf("-");
        }
    }


}*/
/*06
#include <stdio.h>

unsigned int binaryToDecimal(char b[32], int length) {
    unsigned int n = 0;
    for (int i = 0; i < length; i++) {
        n = (n << 1) | (b[i] - '0');
    }
    return n;
}

void ac() {
    char c;
    char b[32];
    int i = 0;

    while (1) {
        scanf("%c", &c);

        if (c == '0' || c == '1') {
            if (i < 32) {
                b[i] = c;
                i++;
            }
        } else if (c == ' ' || c == '.' || c == '-') {
            continue;
        } else if (c == '\n') {
            break;
        }
    }

    unsigned int decimalNumber = binaryToDecimal(b, i);
    printf("%u\n", decimalNumber);
}

int main() {
    ac();
    return 0;
}
*/
//07
#include "stdio.h"
void sc2pt(){
    int n;
    scanf("%d",&n);
    float a[n];
    float total=0;
    float p[n];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);

        if(a[i]<60){
             p[i]=0.0;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=63.9&&a[i]>=60){
            p[i]=1.0;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=65.9&&a[i]>=64){
            p[i]=1.5;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=67.9&&a[i]>=66){
            p[i]=1.7;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=71.9&&a[i]>=68){
            p[i]=2.0;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=74.9&&a[i]>=72){
            p[i]=2.3;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=77.9&&a[i]>=75){
            p[i]=2.7;
            printf("%.1f ",p[i]);
        } if(a[i]<=81.9&&a[i]>=78){
            p[i]=3.0;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=84.9&&a[i]>=82){
            p[i]=3.3;
            printf("%.1f ",p[i]);
        }
        if(a[i]<=89.9&&a[i]>=85){
            p[i]=3.7;
            printf("%.1f ",p[i]);

        }
        if(a[i]<=100&&a[i]>=90){
            p[i]=4.0;
            printf("%.1f ",p[i]);
        }
        total+=p[i];
        }
    printf("\nAve=%.2f",total/n);

}
int main(){
    sc2pt();

}