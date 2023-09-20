//
// Created by 刘旭 on 2023/9/19.
//
#include<stdio.h>
int count =0;
int Frag(int n) {
    if (n == 0) {
        count++;
    }
    else if (n < 0) {}
    else {
    Frag(n - 1);
    Frag(n - 2);
}
}
int main(){
    int n;
    scanf("%d",&n);
    Frag(n);
    printf("%d",count);
}