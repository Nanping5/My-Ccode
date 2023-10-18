#include "stdio.h"
int main(){
    char arl[100];
    int i=0;
    while(1){
        scanf("%c",&arl[i]);
        if(arl[i]=='\n'){
            break;
        }
        else
        i++;
    }
    char clo[100];
    for (int j = 0; j < i; ++j) {
        for (int k = 0; k < i; ++k) {
            if(arl[k]==arl[k+1]){
                arl[k+1]='*';

            }
        }
    }
    for (int j = 0; j < i; ++j) {
        printf("%c ",arl[j]);
    }
}