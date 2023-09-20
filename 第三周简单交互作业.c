#include<stdio.h>
#include "ctype.h"
int main() {
    char c;
    while (1) {
        printf("Z>");
        c = getchar();
        c = toupper(c);
        if (c == 'H' || c == '?') {
            printf("Help...\n");
        } else if (c == 'A') {
            printf("Add...\n");
        } else if (c == 'Q') {
            printf("End.\n");
            return 0;
        } else {
            printf("Invalid...\n");
        }
        while (c = getchar() != '\n') {
            continue;}
        }
}

