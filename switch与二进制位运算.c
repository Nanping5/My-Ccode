// Created by 刘旭 on 2023/9/13.
#include<stdio.h>
int main() {
    int a, b, c;
    char cha;
    scanf("%d %c %d", &a, &cha, &b);
    if ((int) cha == 38 || (int) cha == 124 || (int) cha == 94)
    {

        switch ((int) cha) {
            case 38 :
            c = a & b;
            printf("%d & %d = %d", a, b, c);
            break;
            case 124 :
            c = a | b;
            printf("%d | %d = %d", a, b, c);
            break;
            case 94 :
            c = a ^ b;
            printf("%d ^ %d = %d", a, b, c);
            break;

        }


    }
    else{
        printf("ERROR");
    }

}