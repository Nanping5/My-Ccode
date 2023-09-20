#include "stdio.h"
int jiecheng(long long n){
    if(n<=0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else if(n>=2){
        return n* jiecheng(n-1);
    }
}
int main(){
    long long n;
    scanf("%d",&n);
    printf("%d",jiecheng(n));
}