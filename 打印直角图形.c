#include "stdio.h"
int main()
{
        for (int j = 0; j < 5; j++) {
            printf("              ");
            for (int k = 0; k < j+1; k++) {
                printf("$");

            }
            printf("\n");
        }


}