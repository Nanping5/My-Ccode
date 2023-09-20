//
// Created by 刘旭 on 2023/9/19.
//
#include<stdio.h>
void bubble(int shuzu[]){
    int i,j,t;
    for(i=0;i<=8-1;i++){
        for(j=0;j<=8-1;j++){
            if(shuzu[j]>shuzu[j+1]){
                t=shuzu[j];
                shuzu[j]=shuzu[j+1];
                shuzu[j+1]=t;
            }
        }
    }
}

int main(){
    int shuzu[]={1,5,9,59,7,66,4,9,0};
    bubble(shuzu);
    for(int i=0;i<8;i++){
        printf("%d\n",shuzu[i]);
    }

}