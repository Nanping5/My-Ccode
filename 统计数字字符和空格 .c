#include "stdio.h"
int main(){
    char c;
    int blank=0,dight=0,other=0;
    while(1){
        c=getchar();
        switch (c) {
            case ' ':blank++;
            break;
            case '0':
            case '1':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '2':
                dight++;
                break;
            default:other++;
                break;
        }
        if(c=='\n'){
            break;
        }

    }
    printf("blank = %d, digit = %d, other = %d",blank,dight,other-1);
}