//
// Created by 刘旭 on 2023/9/19.
//
#include "stdio.h"
float sc2pt(int n){

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
    int n;
    scanf("%d",&n);
    sc2pt(n);

}