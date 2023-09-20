//
// Created by 刘旭 on 2023/9/19.
//
#include<stdio.h>
int main(){
    int arl[]={1,2,3,5,65,8,6,9};
    int shuzu[3][4];
    int sz= sizeof (arl)/sizeof arl[0];
   printf("%d\n",sz);
   for(int i=0;i<3;i++){
       int i=0;
       for(int j=0;j<=4;j++){
           shuzu[i][j]=j;
           printf("%d\n",shuzu[i][j]);
       }

   }

}
