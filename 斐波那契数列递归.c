
#include "stdio.h"
int Fib(int n){
     long long result=0;
     if(n==0){
         return 0;
     }
    if(n==1){
        result=1;
        return result;
    }
    if(n>=2){
        result= Fib(n-2)+ Fib(n-1);
        return result;
    }
}
int main(){
    int n;
    scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("%d ", Fib(i));
}
}