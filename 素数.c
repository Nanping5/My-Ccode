#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        return 0;
    }
    if(n>100){
        return 0;
    }
    if(1<=n&n<=100){
        if(n%2==0||n%3==0||n%5==0||n%7==0){
            printf("0");
        }
        else{printf(" 1");}


    }



}
